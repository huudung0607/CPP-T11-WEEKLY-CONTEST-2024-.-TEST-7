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

bool prime(int n)
{
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	vector<pair<pair<int, int>, int>> v(n);
	for (int i = 0; i < n; i++)
	{
		int x, y, z;
		cin >> x >> y >> z;
		v[i].first.first = x;
		v[i].first.second = y;
		v[i].second = z;
	}
	bool found = false;
	for (vector<pair<pair<int,int>,int>>::reverse_iterator it = v.rbegin(); it!=v.rend();it++)
	{
		int sum = it->first.first + it->first.second + it->second;
		if (prime(sum))
		{
			cout << it->first.first << " " << it->first.second << " " << it->second << endl;
			found = true;
		}
	}
	if (!found)
	{
		cout << "28tech" << endl;
	}
}
