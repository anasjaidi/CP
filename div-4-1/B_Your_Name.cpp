#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int i = 0;


    while (i < n) {
        int n;
        string a , b;
        cin >> n >> a >> b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if (a == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        i++;
    }
    return 0;
}
