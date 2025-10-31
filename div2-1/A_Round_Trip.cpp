#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    while (n--)
    {
        int v = 0;
        int r = 0;
        int i, max, c , t;

        cin >> i >> max >> c >> t;
        string s;

        cin >> s;

        for (size_t k = 0; k < t; k++) {
            if (s[k] == '1') {
                r++;
                v += c;
            } else {
                if (i < max || (i - v) < max) {
                    r++;
                }
            }
        }
        
        cout << r << endl;
    }
    
}