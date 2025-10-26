#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string a, b;
    cin >> a >> b;
    if (a.length() != b.length()) {
        cout << "NO";
    }
    int s = 0;
    int e = a.size() - 1;
   
    while (s  < a.size() && e >= 0) {
        if (a[s] != b[e]) {
            cout << "NO";
            return 0;
        }
        s++;
        e--;
    }
    cout << "YES";
    return 0;
}
