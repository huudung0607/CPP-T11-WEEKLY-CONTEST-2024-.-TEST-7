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

int main()
{
	int n;
	cin >> n;
	vector<pair<char, int>> v;
	for (int i = 0; i < n; i++)
	{
		char x;
		cin >> x;
		int num;
		cin >> num;
		v.push_back({ x,num });
	}
	vector<pair<char, int>> res;
	bool found = false;
	for (auto x : v)
	{
		if (x.first == 'o' || x.first == 'a' || x.first == 'i' || x.first == 'e' || x.first == 'u')
		{
			res.push_back({ x.first,x.second });
			found = true;
		}
	}
	cout << endl;
	if (found)
	{
		for (vector<pair<char, int>>::reverse_iterator it = res.rbegin(); it != res.rend(); it++)
		{
			cout << it->first << " " << it->second << endl;
		}
	}
	else
	{
		cout << "28tech" << endl;
	}
}
