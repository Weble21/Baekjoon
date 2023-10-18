#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	char arr[51][51];
	int* col = new int[m];
	int* row = new int[n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			char c;
			cin >> c;
			arr[i][j] = c;
			if (c == 'X') {
				col[j] = 1;
				row[i] = 1;
			}
		}
	}
	int cnt1 = 0;
	int cnt2 = 0;
	for (int i = 0; i < m; i++) {
		if (col[i] != 1) {
			cnt1++;
		}
	}
	for (int i = 0; i < n; i++) {
		if (row[i] != 1) {
			cnt2++;
		}
	}
	if (cnt1 > cnt2) {
		cnt1 -= cnt2;
	}
	else {
		cnt2 -= cnt1;
	}

	cout << cnt1 + cnt2;
}