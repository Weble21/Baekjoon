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
	cin >> n;
	int arr[10001] = { 0, };
	int yes[10001] = { 0, };
	int no[10001] = { 0, };

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	yes[0] = arr[0];
	no[0] = arr[0];
	int maxi = -1;
	if (arr[1] > arr[0] && arr[2] > arr[0]) {
		yes[1] = arr[1];
		no[1] = arr[1];
		for (int i = 2; i < n; i++) {
			yes[i] = arr[i] + no[i - 2];
			no[i] = arr[i] + yes[i - 1];
			if (arr[i + 2] > arr[i + 1] && i > 2) {

				int tmp = max(yes[i - 1], no[i - 1]);
				yes[i] = tmp;
				no[i] = tmp;
				yes[i - 1] = tmp;
				no[i - 1] = tmp;
			}
			if (max(yes[i], no[i]) > maxi) {
				maxi = max(yes[i], no[i]);
			}
		}
	}
	else {
		for (int i = 1; i < n; i++) {
			if (i == 1) {
				yes[i] = arr[i];
				no[i] = arr[i] + yes[i - 1];

			}
			else {
				yes[i] = arr[i] + no[i - 2];
				no[i] = arr[i] + yes[i - 1];
			}
			if (arr[i + 2] > arr[i + 1] &&  i > 2) {

				int tmp = max(yes[i - 1], no[i - 1]);
				yes[i] = tmp;
				no[i] = tmp;
				yes[i - 1] = tmp;
				no[i - 1] = tmp;
			}
			if (max(yes[i], no[i]) > maxi) {
				maxi = max(yes[i], no[i]);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << i << " : " << "yes[]: " << yes[i] << " no[]: " << no[i] << endl;
	}

	cout << maxi;


}