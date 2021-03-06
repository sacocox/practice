/**
 * @author Santiago Correa
 * @Problem Directional move
 */
#include <bits/stdc++.h>
#include <string>
#include <map>

using namespace std;

int main() {

    map<char, string> directional_map =
            {
                    {'N', {'E', 'W'}},
                    {'E', {'S', 'N'}},
                    {'S', {'W', 'E'}},
                    {'W', {'N', 'S'}}
            };
    int t, n;
    string s;
    cin >> t;
    while (t > 0) {
        cin >> n;
        cin >> s;
        char facing = 'E';
        for (int i = 0; i < n; i++) {
            int direction = s[i] - '0';
            facing = directional_map[facing][direction];
        }
        cout << facing << endl;
        t--;
    }
    return 0;
}