#include <iostream>
#include <unordered_map>

using namespace std;

int main(int argc, char const *argv[])
{
   int n;
   std::unordered_map<std::string, int> matches;  
   cin >> n;
   string max;
   int mx  = 0;
   while (n--)
   {
    string s;  
    cin >> s;
    if (matches.count(s)) {
        matches[s] += 1;
    } else {
        matches[s] = 1;
    }
    if (matches[s] > mx) {
        mx = matches[s];
        max = s;
    }
   }
    cout << max;
return 0;
}
