#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<string, bool> m;
	int N, M, count{ 0 };
	cin >> N >> M;
	string str;
	for (int i = 0; i < N; i++){
		cin >> str;
		m.insert(pair<string, bool>(str, true));
	}
	for (int i = 0; i < M; i++) {
		cin >> str;
		if (m[str] == true) count++;
	}
	cout << count;
}