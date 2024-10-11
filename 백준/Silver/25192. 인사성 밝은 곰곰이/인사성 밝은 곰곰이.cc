#include <iostream>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	set<string>s;
	int n;
	int count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string temp;
		cin >> temp;
		if (temp == "ENTER") {
			count += s.size();
			s.clear();
		}
		else {
			s.insert(temp);
		}
	}
	count += s.size();
	cout << count;
}