#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, k;

    cin >> n >> k;

    while (k > 0) {
        if ( n % 10 == 0) {
            n /= 10;
        } else {
            n--;
        }
        k--;
    }
    cout << n;
    return 0;
}
