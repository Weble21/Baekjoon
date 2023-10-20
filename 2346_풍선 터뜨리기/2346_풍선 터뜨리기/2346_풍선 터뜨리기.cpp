#include <iostream>
#include <deque>

using namespace std;

deque<pair<int, int>> dq;

int check(int a) {
	if (a < 0) {
		a = a * (-1);
	}
	return a;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		dq.push_back(make_pair(k, i + 1));
	}

	while (dq.size() != 0) {
		int cnt = dq.front().first;
		cout << dq.front().second << " ";
		dq.pop_front();
		if(dq.empty()) break;
		if (cnt > 0) {
			for (int i = 0; i < cnt - 1; i++) {
				int tmp1 = dq.front().first;
				int tmp2 = dq.front().second;
				dq.pop_front();
				dq.push_back(make_pair(tmp1, tmp2));
			}
		}
		else {
			cnt = check(cnt);
			for (int i = 0; i < cnt; i++) {
				dq.push_front(make_pair(dq.back().first, dq.back().second));
				dq.pop_back();
			}
		}
	
	}

}