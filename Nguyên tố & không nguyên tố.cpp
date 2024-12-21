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

bool isprime(int n)
{
	if (n < 2)
	{
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int n;
	vector<int> nt;
	vector<int> knt;
	while (cin >> n)
	{	
		if (isprime(n))
		{
			nt.push_back(n);
		}
		else
		{
			knt.push_back(n);
		}
	}
	for (int i = nt.size() - 1; i >= 0; i--)
	{
		cout << nt[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < knt.size(); i++)
	{
		cout << knt[i] << " ";
	}
}
