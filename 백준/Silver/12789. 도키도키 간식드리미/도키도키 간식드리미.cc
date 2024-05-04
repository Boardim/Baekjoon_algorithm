#include <iostream>
#include <stack>
using namespace std;
int main() {
	int n, num, cur{ 1 };
	stack<int>s;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> num;
		if (num != cur) {
			s.push(num);
		}
		else {
			cur++;
		}
		if (s.size() != 0) {
			while (s.top() == cur) {
				s.pop();
				cur++;
				if (s.size() == 0) break;
			}
		}
	}
	if (cur == n + 1) cout << "Nice";
	else cout << "Sad";
}