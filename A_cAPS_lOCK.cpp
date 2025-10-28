#include <iostream>

using namespace std;

bool isAllUppercase(const char *s) {
    for (int i = 0; s[i]; ++i) {
        if (isalpha(s[i]) && !isupper(s[i]))
            return false;
    }
    return true;
}

string reverseCase(const string &s) {
    string result = s; // make a copy to modify
    for (char &ch : result) {
        if (isupper(ch))
            ch = tolower(ch);
        else if (islower(ch))
            ch = toupper(ch);
        // non-letter characters are left unchanged
    }
    return result;
}

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    bool reverse = islower(s[0]) && isAllUppercase(s.c_str() + 1)  || isAllUppercase(s.c_str());
    if (reverse) {
        string r = reverseCase(s);
        cout << r;
    } else {
        cout << s;
    }
    return 0;
}
