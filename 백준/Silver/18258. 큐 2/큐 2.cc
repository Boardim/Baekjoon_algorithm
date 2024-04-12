#include <iostream>
#include <queue>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<int> q;
	string a;
	int N, k;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> a;

		if (a == "push") {
			cin >> k;
			q.push(k);
		}
		else if (a == "pop") {
			if (q.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (a == "front") {
			if (q.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << q.front() << '\n';
			}
		}
		else if (a == "back") {
			if (q.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << q.back() << '\n';
			}
		}
		else if (a == "size")
			cout << q.size() << '\n';
		else if (a == "empty")
			cout << q.empty() << '\n';
		else if (a == "top") {
			if (q.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << q.front() << '\n';
			}
		}
	}
}