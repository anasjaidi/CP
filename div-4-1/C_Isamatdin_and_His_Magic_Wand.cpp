#include <iostream>
#include <vector>

using namespace std;


void sort_parity(vector<int> &v) {
    bool has_even = false, has_odd = false;
    for (int x : v) {
        if (x % 2 == 0) has_even = true;
        else has_odd = true;
    }

    if (has_even && has_odd) {
        sort(v.begin(), v.end());
    }
}

void printArray(vector<int> &arr) {
    for (int &val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    while (n--) {
        int t;
        cin >> t;
        vector<int> a(t);
         for (int i = 0; i < t; i++) {
            cin >> a[i];
        }
        sort_parity(a);
        printArray(a);
    }
    return 0;
}
