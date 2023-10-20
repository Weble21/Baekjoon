#include <iostream>

using namespace std;

int triple(int a, int b, int c) {
	if (a > b) {
		if (a > c) {
			return a;
		}
		else {
			return c;
		}
	}
	else {
		if (c > b) {
			return c;
		}
		else {
			return b;
		}
	}
}

int compare(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

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
	std::cout.tie(0);

	int n;
	cin >> n;
	int arr[10001] = { 0, };
	int yes[10001] = { 0, };
	int no[10001] = { 0, };

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	if (n == 1) {
		cout << arr[0];
		return 0;
	}
	yes[0] = arr[0];
	no[0] = arr[0];
	int maxi = -1;
	if (arr[0] + arr[1] + arr[3] + arr[4] >= arr[1] + arr[2] + arr[4] + arr[5]) {
		for (int i = 1; i < n; i++) {
			if (i == 1) {
				yes[i] = arr[i];
				no[i] = arr[i] + yes[i - 1];
			}
			else if (i == 2) {
				if (arr[i + 2] > arr[i + 1]) {
					yes[i] = arr[i] + no[i - 2];
					no[i] = arr[i] + yes[i - 1];
					int tmp = triple(yes[i] + arr[i + 1], no[i] + arr[i + 2], maxi + arr[i + 1]);
					if (tmp == yes[i] + arr[i + 1] || tmp == no[i] + arr[i + 1]) {
						yes[i] = compare(yes[i], no[i]);;
						no[i] = compare(yes[i], no[i]);;

					}
					else {
						yes[i] = maxi;
						no[i] = maxi;
					}
				}
				else {
					yes[i] = arr[i] + no[i - 2];
					no[i] = arr[i] + yes[i - 1];
				}
			}
			else {
				if (i > 2 && arr[i + 2] > arr[i + 1]) {
					yes[i] = arr[i] + no[i - 2];
					no[i] = arr[i] + yes[i - 1];
					int tmp = triple(yes[i] + arr[i + 1], no[i] + arr[i + 2], maxi + arr[i + 1] + arr[i + 2]);
					if (tmp == yes[i] + arr[i + 1] || tmp == no[i] + arr[i + 2]) {
						yes[i] = compare(yes[i], no[i]);;
						no[i] = compare(yes[i], no[i]);;
					}
					else {
						if (maxi != yes[i - 1]) {

						}
						else {

							yes[i] = maxi;
							no[i] = maxi;
						}
					}
				}
				else {
					yes[i] = arr[i] + no[i - 2];
					no[i] = arr[i] + yes[i - 1];
				}
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
				no[i] = arr[i];
			}
			else {
				if (i > 2 && arr[i + 2] > arr[i + 1]) {
					yes[i] = arr[i] + no[i - 2];
					no[i] = arr[i] + yes[i - 1];
					int tmp = triple(yes[i] + arr[i + 1], no[i] + arr[i + 2], maxi + arr[i + 1] + arr[i + 2]);
					if (tmp == yes[i] + arr[i + 1] || tmp == no[i] + arr[i + 2]) {
						yes[i] = compare(yes[i], no[i]);;
						no[i] = compare(yes[i], no[i]);;
					}
					if (maxi != yes[i - 1]) {
						yes[i] = maxi + arr[i];
						no[i] = maxi + arr[i];
					}
					else {

						yes[i] = maxi;
						no[i] = maxi;
					}
				}
				else {
					yes[i] = arr[i] + no[i - 2];
					no[i] = arr[i] + yes[i - 1];
				}
			}
			if (max(yes[i], no[i]) > maxi) {
				maxi = max(yes[i], no[i]);
			}
		}
	}


	std::cout << maxi;


}