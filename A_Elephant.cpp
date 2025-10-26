#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int n;
    int steps[] = {5,4,3,2,1,};
    int s = 0;

    cin >> n;

    int i = 0;
    while (n) {
        while (i < 5) {
            if (n >= steps[i]) {
                s += n / steps[i];
                n %= steps[i];
                i++;
                break;
            } else {
                i++;
            }
        }
    }
    cout << s;
    return 0;
}
