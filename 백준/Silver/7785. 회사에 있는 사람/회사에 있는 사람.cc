#include <iostream>
#include <set>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	set<string>s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string a, b;

		cin >> a >> b;
		if (b == "enter") s.insert(a);
		else s.erase(a);
	}
	for (auto i = s.rbegin(); i != s.rend(); i++) {
		cout << *i << '\n';
	}
}