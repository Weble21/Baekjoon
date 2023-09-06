#include <iostream>
#include <vector>
#include <algorithm>
#define INF 999999

using namespace std;
int c[100001];
vector<pair<int, int>> v;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int k, n;
	cin >> k >> n;
	for (int i = 0; i < n; i++)
	{
		int money, person;
		cin >> money >> person;
		v.push_back(make_pair(money, person));
	}
	c[0] = 0;
	for (int i = 1; i < 100001; i++)
	{
		for (int j = 0; j < v.size(); j++)
		{
			if (i >= v[j].first)
				c[i] = max(c[i], c[i - v[j].first] + v[j].second);
		}
	}
	for (int i = 1; i <= 100001; i++)
	{
		if (c[i] >= k)
		{
			cout << i;
			break;
		}
	}


	return 0;
}
