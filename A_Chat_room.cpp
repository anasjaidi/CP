#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    string m = "hello";
    int mi= 0;
    int i = 0;
    string s;
    cin >> s;

    if (s.length() < 5)
    {
        cout << "NO";
        return 0;
    }

    while (i < s.length())
    {
        if (mi == 5)
        {
            break;
        }
        if (s[i] == m[mi]) {
            mi++;
        }

        i++;
    }
    if (mi == 5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
