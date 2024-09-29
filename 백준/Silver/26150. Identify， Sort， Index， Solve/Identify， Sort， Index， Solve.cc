#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int cpr(tuple<string, int, int>t1, tuple<string,int,int>t2) {
	return get<1>(t1) < get<1>(t2);
}

int main() {
	vector<tuple<string, int, int>>v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		int a1, a2;
		cin >> s >> a1 >> a2;
		v.push_back(make_tuple(s, a1, a2));
	}
	sort(v.begin(), v.end(), cpr);
	string answer = "";
	for (int i = 0; i < n; i++) {
		answer += get<0>(v[i])[get<2>(v[i])-1];
		if (answer[i] >= 'a' && answer[i] <= 'z') answer[i] -= 32;
	}
	cout << answer;
}