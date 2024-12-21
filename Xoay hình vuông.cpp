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

void left(vector<vector<int>> &v)
{
	int temp = v[0][0];
	v[0][0] = v[1][0];
	v[1][0] = v[1][1];
	v[1][1] = v[0][1];
	v[0][1] = temp;
}
void right(vector<vector<int>>& v)
{
	int temp = v[0][1];
	v[0][1] = v[1][1];
	v[1][1] = v[1][2];
	v[1][2] = v[0][2];
	v[0][2] = temp;
}
int main() {
	vector<vector<int>> a(2, vector<int>(3));
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
		}
	}
	int n;
	cin >> n;
	cin.ignore();
	
	for (int i = 0; i < n; i++)
	{
		char c;
		cin >> c;
		if (c == 'L' || c == 'l')
		{
			left(a);
		}
		else if (c == 'R' || c == 'r')
		{
			right(a);
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
