#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int m;
		cin >> m;
		vector<int> v;
		for (int j = 0; j < m; j++) {
			int t;
			cin >> t;
			v.push_back(t);
		}
		sort(v.begin(), v.end());
		int m2; 
		cin >> m2;
		for (int k = 0; k < m2; k++) {
			int t;
			cin >> t;
			
			if (binary_search(v.begin(), v.end(), t)) {
				cout << "1" << "\n";
			}
			else {
				cout << "0" << "\n";
			}
		}
	}
	return 0;
}