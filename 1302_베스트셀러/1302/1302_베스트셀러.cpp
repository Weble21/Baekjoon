#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool cmp(const pair<string, int>& a, const pair<string, int>& b)
{
	if (a.second == b.second)
	{
		return a.first < b.first;
	}
	return a.second > b.second;
}

vector<pair<string, int>> v;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		int cnt = 0;
		for (int i = 0; i < v.size(); i++) {
			if (v[i].first == str) {
				v[i].second += 1;
				cnt++;
				break;
			}
			else {
				continue;
			}
		}
		if (cnt == 0) {
			//¾øÀ¸¸é
			v.push_back(make_pair(str,1));
		}
	}
	sort(v.begin(), v.end(), cmp);
	cout << v[0].first;
	
}