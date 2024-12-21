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
    int n;
    cin >> n;
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<int>tmp;
        for (int j = 1; j <= m; j++)
        {
            int x;
            cin >> x;
            tmp.push_back(x);
        }
        v.push_back(tmp);
    }
    set<vector<int>> se;
    for (auto x : v)
    {
        se.insert(x);
    }
    cout << se.size();
}
