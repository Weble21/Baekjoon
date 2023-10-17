#include <iostream>

using namespace std;

int min(int a, int b) {
	if (a < b) {
		return a;
	}
	else {
		return b;
	}
}

int resultMin(int a, int b, int c) {
	int min = a;
	if (b < a) {
		if (b < c) {
			return b;
		}
		else {
			return c;
		}
	}
	else {
		if (a < c) {
			return a;
		}
		else {
			return c;
		}
	}
}

//거꾸로도 생각하기
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int arr[1001][3];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			int k;
			cin >> k;
			arr[i][j] = k;
		}
	}

	for (int i = 1; i < n; i++) {
		arr[i][0] = min(arr[i][0]+ arr[i - 1][1], arr[i][0] + arr[i - 1][2]);
		arr[i][1] = min(arr[i][1] + arr[i - 1][0], arr[i][1] + arr[i - 1][2]);
		arr[i][2] = min(arr[i][2] + arr[i - 1][1], arr[i][2] + arr[i - 1][0]);
	}

	cout << resultMin(arr[n - 1][0], arr[n - 1][1], arr[n - 1][2]);
}