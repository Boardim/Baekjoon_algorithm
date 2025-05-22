#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int,int>p1, pair<int,int>p2) {
	if (p1.first != p2.first) {
		return p1.first < p2.first;
	}
	return p1.first < p2.first;
}

int main() {
	int N, M, S;
	cin >> N >> M >> S;
	vector<pair<int, int>>vec;
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		vec.push_back({ a,b });
	}

	sort(vec.begin(), vec.end(), cmp);

	int possible = 0;
	
	for (int i = 0; i < N; i++) {
		

		if (possible + M > S) {
			
			cout << -1 << "\n";
			return 0;
		}
		else if (possible + M <= vec[i].first) {
			
			cout << possible;
			return 0;
		}
		else  {
			
			possible = vec[i].first + vec[i].second;
	
		}
		
	}
	if (possible + M <= S) {
		cout << possible;
	}
	else cout << -1;
}
