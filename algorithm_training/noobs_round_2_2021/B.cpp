/**
 * @author Santiago Correa
 * @Problem Make all Odd
 */
#include <bits/stdc++.h>
#include <string>
#include <map>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t > 0) {
        cin >> n;
        int min = 0;
        bool odd = false;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a % 2 == 0) {
                min++;
            } else {
                odd = true;
            }
        }
        if (!odd) {
            cout << -1 << endl;
        } else {
            cout << min << endl;
        }
        t--;
    }
    return 0;
}

