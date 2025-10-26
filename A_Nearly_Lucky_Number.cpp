#include <iostream>
using namespace std;

bool isLuck(short i) {
    return i == 7 || i == 4;
}

int main(int argc, char const *argv[])
{
    long long n;
    int l = 0;
    cin >> n;

    while (n > 0) {
        short a = n % 10;
        n /= 10;
        if (isLuck(a)) {
            l++;
        }
    }
    if ( l == 0) {
        cout << "NO";
        return 0;
    }
    while (l > 0) {
        short a = l % 10;
        l /= 10;
        if (!isLuck(a)) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
