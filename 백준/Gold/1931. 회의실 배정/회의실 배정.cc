#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<pair<int, int>>v;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int a, b;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		v.push_back({ a,b });
	}
	sort(v.begin(),v.end());

	vector<pair<int, int>>solve;
	int prevF = v[0].first;
	int prevS = v[0].second;
	int checkF;
	int checkS;
	solve.push_back({ prevF,prevS });
	for (int i = 1; i < n; i++) {
		if (v[i].first < prevF) continue;
		else if (v[i].first >= prevS) {
			prevF = v[i].first;
			prevS = v[i].second;
			solve.push_back({ prevF, prevS });
		}
		else if (v[i].first > prevF && v[i].second > prevS) prevF = v[i].first;	
		else if (v[i].first > prevF && v[i].second < prevS) {
				solve.pop_back();
				prevF = v[i].first;
				prevS = v[i].second;
				solve.push_back({ prevF,prevS });
		}
	}
	cout << solve.size();
}