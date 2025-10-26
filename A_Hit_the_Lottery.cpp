#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int m;
    int rtn = 0;
    cin >> m;
    while (m) {
        if (m >= 100) {
            rtn += m / 100;
            m %= 100;
        } else if (m >= 20) {
rtn += m / 20;
            m %= 20;
        } else if (m >= 10) {
            rtn += m / 10;
            m %= 10;
        } else if (m >= 5) {
            rtn += m / 5;
            m %= 5;
        } else if (m >= 1) {
            rtn += m / 1;
            m %= 1;
        }
    }
    cout << rtn;
    return 0;
}
