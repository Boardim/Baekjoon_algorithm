#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int mod = 1e9 + 7;
	
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;

		int prevIdx = -1;
		long long int gap;
		long long int sum = 1;
		bool findAEIOU = false;

		int addCount = 0;
		for (int k = 0; k < s.size(); k++) {
			if (s[k] == 'a' || s[k] == 'e' || s[k] == 'i' || s[k] == 'o' || s[k] == 'u') {
				if (prevIdx == -1) {
					prevIdx = k;
					findAEIOU = true;
				}
				else {
					gap = k - prevIdx;
					sum = sum * gap % mod;
					prevIdx = k;
				}
			}
		}
		if (!findAEIOU) cout << -1 << "\n";
		else cout << sum << "\n";
	}
}