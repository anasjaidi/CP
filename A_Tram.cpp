#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int n;
    int r = 0;
    int p = 0;

    cin >> n;
    int i = 0;
    while (i < n) {
        int out, in;
        cin >> out >> in;
        r = max(p - out + in, r);
        p = p - out + in;
        i++;
    }
    cout << r;
    return 0;
}
