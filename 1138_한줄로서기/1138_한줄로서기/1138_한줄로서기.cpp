#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	int* arr = new int[n + 1];
	for (int i = 0; i < n; i++) {
		arr[i] = n;
	}


	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		
		int cnt = k;

		for (int j = 0; j < n; j++)
		{
			if (arr[j] == n) {
				if (cnt == 0) {
					arr[j] = (i + 1);
					break;
				}
				if (arr[j] > i + 1) {
					cnt -= 1;
				}
				
			} else {
				continue;
			}

		}
	
	}
	for (int l = 0; l < n; l++) {
		cout << arr[l] << " ";
	}
}