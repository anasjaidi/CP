#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    char c = '\0';
    int r = 1;

    cin >> s;

    for (char x : s) {
        if (r >= 7) {
            break;
        }
        if (x == c) {
            r++;
        } else {
            c = x;
            r = 1;
        }
    }

    cout << ((r == 7) ? "YES" : "NO");
    return 0;
}
