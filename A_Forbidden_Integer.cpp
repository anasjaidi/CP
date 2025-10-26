#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    int n , k , x;
    // from 1 to k except x make n
    cin >> t;

    while (t-- > 0) {
        cin >> n >> k >> x;
        // n = 10
        // k = 8
        // x = 2
        if (k != x) {
            int num = n / k;
            if (num != x) {
                // num k and n % k
            }
        }

    }

    return 0;
}
