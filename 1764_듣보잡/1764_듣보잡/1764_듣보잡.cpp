#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	map<string, int> map;
	vector<string> res;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		map.insert(make_pair(str, i));
	}
	for (int i = 0; i < m; i++) {
		string str;
		cin >> str;
		if (map.find(str) != map.end()) {
			res.push_back(str);
		}			
	}
	sort(res.begin(), res.end());
	cout << res.size() << "\n";
	for (int i = 0; i < res.size(); i++) {
		cout << res[i];
		if (i != res.size()-1)
			cout << "\n";
	}

}