#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string str;
	cin >> str;

	int cnt = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'P')
			cnt++;
		if (str[i] == 'A')
		{
			if (cnt >= 2 && str[i + 1] == 'P')
				cnt = cnt - 2;
			else
			{
				cnt = 0;
				break;
			}
		}
	}

	if (cnt == 1)
		cout << "PPAP" << endl;
	else
		cout << "NP" << endl;

}