#include <iostream>

using namespace std;

int checkMax(int a, int b) {
	if (a >= b)
		return a;
	else
		return b;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	int* arr = new int[n];
	int* sum = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int max = arr[0];
	sum[0] = arr[0];
	for (int i = 1; i < n; i++) {
		if (sum[i - 1] < 0) {
			sum[i - 1] = 0;
			if (arr[i] + sum[i - 1] > 0) {
				sum[i] = arr[i] + sum[i - 1];
			}
			else {
				sum[i] = arr[i];
			}
		}
		else {
			if (arr[i] + sum[i - 1] > 0) {
				sum[i] = arr[i] + sum[i - 1];
			}
			else {
				sum[i] = arr[i];
			}
		}
		max = checkMax(max, sum[i]);
	}
	cout << max;
}