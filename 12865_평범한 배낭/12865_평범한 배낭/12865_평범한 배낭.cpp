#include <iostream>

using namespace std;

int table[101][100003];
int v[101][2];

int main()
{
	int n, capacity;
	cin >> n >> capacity;
	v[0][0] = 0;

	int value, weight;
	for (int i = 1; i <= n; i++)
	{
		cin >> weight >> value;
		v[i][0] = value;
		v[i][1] = weight;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= capacity; j++)
		{
			if (j >= v[i][1] && (table[i - 1][j] < v[i][0] + table[i - 1][j - v[i][1]]))
				table[i][j] = v[i][0] + table[i - 1][j - v[i][1]];
			else
				table[i][j] = table[i - 1][j];
		}
	}

	cout << table[n][capacity];

	return 0;
}