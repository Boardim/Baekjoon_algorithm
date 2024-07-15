#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int N;
	cin >> N;
	int n, m;

	for (int i = 0; i < N; i++) {
		vector<vector<int>>v(100);
		vector<int>coach;
		vector<int>minv;

		int prize = 0;
		cin >> n >> m;
		for (int k = 0; k < n; k++) {
			int rep;
			cin >> rep;
			for (int j = 0; j <= rep; j++) {
				int num;
				cin >> num;
				v[k].push_back(num);
			}
		}
		for (int k = 0; k < m; k++) {
			int num;
			cin >> num;
			coach.push_back(num);
		}

		//상금 값 더하기
		for (int k = 0; k < n; k++) {
			for (int j = 0; j < v[k].size()-1; j++) {
				minv.push_back(coach[v[k][j] - 1]);
			}
			int min = *min_element(minv.begin(), minv.end());
			prize += min * v[k][v[k].size()-1];
			minv.clear();
		}
		cout << prize << "\n";
		coach.clear();
		
	}
}