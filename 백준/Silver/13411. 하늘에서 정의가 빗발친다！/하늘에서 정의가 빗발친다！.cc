#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector <pair<double,int>>v;
	for (int i = 1; i <= n; i++) {
		double x, y, z;
		cin >> x >> y >> z;
		double temp = sqrt(pow(x, 2) + pow(y, 2)) / z;
		v.push_back(make_pair(temp, i));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		cout << v[i].second << "\n";
	}
}