#include <iostream>
using namespace std;
int list[26][200001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	string s;
	int n;
	cin >> s >> n;

	for (int i = 0; i < 26; i++) {
		for (int k = 1; k <= s.size(); k++) {
			list[i][k] = list[i][k - 1];
			if (s[k - 1] == i + 'a') list[i][k]++;
		}
	}
	
	for (int i = 0; i < n; i++) {
		char c;
		int a, b;
		cin >> c >> a >> b;

		cout << list[c - 'a'][b+1] - list[c - 'a'][a] << "\n";
	}
}