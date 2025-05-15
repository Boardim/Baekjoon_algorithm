#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int arr[26];

bool cmp(pair<char,double>p1, pair<char,double>p2) {
	return p1.second > p2.second;
}

int main() {
	int part, n;
	cin >> part >> n;

	vector<pair<char, double>>v;
	for (int i = 0; i < n; i++) {
		char a; double b;
		cin >> a >> b;
		if (b >= part*0.05) {
			for (int i = 1; i < 15; i++) {
				v.push_back({ a,b / i });
			}
			arr[a - 'A']++;
		}
	}

	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < 14; i++) {
		arr[v[i].first-'A']++;
	}
	for (int i = 0; i < 26; i++) {
		if (arr[i] != 0) cout << char(i + 'A') << " " << arr[i]-1 << "\n";
	}
}