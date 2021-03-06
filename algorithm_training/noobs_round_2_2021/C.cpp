/**
 * @author Santiago Correa
 * @Problem Team
 */
#include <bits/stdc++.h>
#include <queue>

using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    while (t > 0) {
        cin >> n;
        cin >> k;
        int max = 0;
        priority_queue<int, vector<int>, greater<>> students;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a >= k) {
                max++;
            } else {
                students.push(a);
            }
        }

        while (students.size() > 1) {
            priority_queue<int, vector<int>, greater<>> aux;
            int x = students.top();
            students.pop();
            while (!students.empty()) {
                int j = students.top();
                students.pop();
                if (x + j >= k) {
                    max++;
                    break;
                } else {
                    aux.push(j);
                }
            }
            students = aux;
        }

        cout << max << endl;
        t--;
    }
    return 0;
}

