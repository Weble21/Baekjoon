#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	priority_queue<int, vector<int>, greater<int>> pq;
	int n;
	int result = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		pq.push(k);
	}

	while (pq.size() != 1) {
		int tmp;
		tmp = pq.top();
		pq.pop();
		tmp += pq.top();
		pq.pop();
		result += tmp;
		pq.push(tmp);
	}
	cout << result;
}