#include <iostream>

using namespace std;

int parent[1000001];


int Find(int x)
{
	if (x == parent[x])
		return x;
	else
	{
		int y = Find(parent[x]);
		parent[x] = y;
		return y;
	}
}

void Union(int x, int y)
{
	x = Find(x);
	y = Find(y);
	if (x != y)
		parent[y] = x;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n;
	for (int i = 0; i <= n; i++)
		parent[i] = i;

	int t, x;
	cin >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> t;
			if (t == 1)
				Union(i, j);

		}

	}
	int y;
	int root = 0;

	cin >> y;
	root = Find(y);
	int cnt = 1;
	for (int i = 1; i < m; i++)
	{
		cin >> y;
		if (root != Find(y))
			cnt = 0;
	}

	if (cnt)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}