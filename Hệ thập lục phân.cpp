#include <iostream>
#include <cmath>
#include <set>
#include <unordered_set>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

vector<char> convert_number(long long n) {
    vector<char> res;
    if (n == 0)
    {
        res.push_back('0');
    }
    else
    {
        while (n > 0)
        {
            int r = n % 16;
            if (r < 10)
            {
                res.push_back('0' + r);
            }
            else
            {
                res.push_back('a' + r - 10);
            }
            n /= 16;
        }
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    int t; cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<char> res = convert_number(n);
        for (char x : res) {
            cout << x;
        }
        cout << endl;
    }
    return 0;
}
