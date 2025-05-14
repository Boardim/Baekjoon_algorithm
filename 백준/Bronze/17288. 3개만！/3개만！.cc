#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int cnt = 0;
	for (int i = 0; i < s.size()-2; i++) {
		if (s[i] + 1 == s[i + 1] && s[i + 1]+1 == s[i + 2]) {
			
			bool check = true;
			while (i + 3 < s.size() && s[i + 2] + 1 == s[i + 3]) {
				i++;
				check = false;
			}
			if (check) {
				cnt++;
			}
		}
	}
	cout << cnt;
}