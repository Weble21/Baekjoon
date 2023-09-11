#include <iostream>
#include <queue>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	priority_queue<int> max;
	priority_queue<int, vector<int>, greater<int>> min;

	int first;
	cin >> first;
	max.push(first);
	t--;
	cout << max.top() << "\n";

	int tmp = 0;
	int second;
	cin >> second;
	min.push(second);
	t--;
	if (max.top() > min.top())
	{
		tmp = max.top();
		max.pop();
		max.push(min.top());
		min.pop();
		min.push(tmp);
	}
	cout << max.top() << "\n";

	for (int i = 0; i < t; i++)
	{
		int a;
		cin >> a;
		//odd
		if (i % 2 == 0)
		{
			max.push(a);
			if (max.top() > min.top())
			{
				tmp = max.top();
				max.pop();
				max.push(min.top());
				min.pop();
				min.push(tmp);
			}
			cout << max.top() << "\n";
		}
		//even
		else
		{
			min.push(a);
			if (max.top() > min.top())
			{
				tmp = max.top();
				max.pop();
				max.push(min.top());
				min.pop();
				min.push(tmp);
			}
			cout << max.top() << "\n";
		}

	}

	return 0;
}