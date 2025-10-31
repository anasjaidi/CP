#include <iostream>
#include <string>
#include <string.h>

using namespace std;

bool v(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U' || x == 'Y' || x == 'y')
        return true;
    else
        return false;
}

int main(int argc, char const *argv[])
{
    string s;

    cin >> s;

    int i = 0;

    while (i < s.length())
    {


        if (s[i] == '.' ) {
            s.erase(i, 1);
        }
        bool is_alpha = isalpha(s[i]);
        if (!is_alpha) {
            i++;
            continue;
        }

        bool is_vowel = v(s[i]);
        bool is_ipper = isupper(s[i]);

        if (is_vowel) {
            s.erase(i, 1);
        } else {
            if (is_ipper) {
                s[i] += 32;
            }


            s.insert(i, ".");
            i+=2;
        }
    }
    cout << s;
    return 0;
}
