#include <iostream>

using namespace std;

int max(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	int resultMax = 0;
	int maxhp = 99;
	cin >> n;
	int result[100][20] = {0,};
	int hp[20];
	int value[20];
	for (int i = 0; i < n; i++) {
		cin >> hp[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> value[i];
		result[0][i] = 0;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < 100; j++) {
			if (i == 0) {
				if (j - hp[0] >= 0) {
					result[j][0] = value[i];
				}
			}

			else {
				if (j - hp[i] >= 0) {
					result[j][i] = max(result[j][i - 1], result[j - hp[i]][i - 1] + value[i]);
				}
				else {
					result[j][i] = result[j][i - 1];
				}
			}
			if (resultMax < result[j][i])
				resultMax = result[j][i];
		}
	}
	
	cout << resultMax;
}