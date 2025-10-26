#include <iostream>
using namespace std;

int main() {
    int c, b, n, rtn = 0;
    cin >> c >> b >> n;

    while ( n > 0) {
        rtn += c * n;
        n--;
    }
    int show = (rtn - b) > 0 ? (rtn - b) : 0;
    cout << show;

    return 0;
}
// 12 + 9 + 6 + 3 - 17