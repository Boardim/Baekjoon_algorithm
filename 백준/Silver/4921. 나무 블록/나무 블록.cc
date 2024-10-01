#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	int i = 1;
	cin >> s;
	while (s != "0") {
		bool check = false;

		for(int index = 0; index < s.size(); index++) {
			if (index == 0) {
				if (s[0] != '1') break;
			}
			else if (index == s.size() - 1) {
				if (s.size() == 1) break;
				if (s[index] == '2') check = true;
			}
			if (s[index] == '1') {
				if (s[index + 1] == '4' || s[index + 1] == '5') continue;
			}
			else if (s[index] == '3') {
				if (s[index + 1] == '4' || s[index + 1] == '5') continue;
			}
			else if (s[index] == '4') {
				if (s[index + 1] == '2' || s[index + 1] == '3') continue;
			}
			else if (s[index] == '5') {
				if (s[index + 1] == '8') continue;
			}
			else if (s[index] == '6') {
				if (s[index + 1] == '3' || s[index + 1] == '2') continue;
			}
			else if (s[index] == '7') {
				if (s[index + 1] == '8') continue;
			}
			else if (s[index] == '8') {
				if (s[index + 1] == '6' || s[index + 1] == '7') continue;
			}
			break;
		}
		cout << i << ". ";
		if (check) cout << "VALID\n";
		else cout << "NOT\n";
		 
		i++;
		cin >> s;
	}
	
}