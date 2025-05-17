#include <iostream>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cout.tie(NULL);
	string key, value;
	int a, b;
	cin >> a >> b;
	map<string, string>m;
	for (int i = 0; i < a; i++) {
		cin >> key >> value;
		m.insert(pair<string, string>(key, value));
	}
	for (int i = 0; i < b; i++) {
		cin >> key;
		cout << m.find(key)->second << "\n";
	}
}
