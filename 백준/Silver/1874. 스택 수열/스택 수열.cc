#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k, current{ 1 }, check{ 0 };
	stack<int> a;
	vector<string> answer;
	a.push(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> k;
		while (a.top() < k) {
			a.push(current);
			current++;
			answer.push_back("+");
			if (current > n + 1) {
				check++;
				break;
			}
		}
		while (a.top() >= k) {
			a.pop();
			answer.push_back("-");
		}
	}
	if (check == 0) {
		for (int i = 0; i < answer.size(); i++) {
			cout << answer[i] << " ";
		}
	}
	else cout << "NO";
}