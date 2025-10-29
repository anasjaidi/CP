#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int i = 0;

    while (i < n) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a == b && b == c && c == d) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        i++;
    }
    return 0;
}
