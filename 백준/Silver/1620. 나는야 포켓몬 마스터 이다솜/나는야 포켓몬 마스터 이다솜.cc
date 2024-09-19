#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, b;
	cin >> n >> b;
	map<string, int>m;
	map<int, string>m2;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		m.insert((make_pair(s, i+1)));
		m2.insert((make_pair(i + 1, s)));
	}
	for (int i = 0; i < b; i++) {
		string s;
		cin >> s;
		if (s[0] <= '9') {
			cout << m2[stoi(s)] << "\n";
		}
		else cout << m[s] << "\n";
	}
}