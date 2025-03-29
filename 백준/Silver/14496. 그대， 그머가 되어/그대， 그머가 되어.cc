#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool connected[1001][1001];

int bfs(int start, int destination) {
	queue<pair<int, int>>q;
	q.push(make_pair(start, 0));

	while (!q.empty()) {
		int cur = q.front().first;
		int count = q.front().second;
		q.pop();

		if (cur == destination) {
			return count;
		}
		for (int i = 1; i < 1001; i++) {
			if (connected[cur][i] == true) {
				q.push(make_pair(i, count + 1));
				connected[cur][i] = false;
				connected[i][cur] = false;
			}
		}


	}
	return -1;

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b;
	cin >> a >> b;
	int N, M;
	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		int num1, num2;
		cin >> num1 >> num2;
		connected[num1][num2] = true;
		connected[num2][num1] = true;
	}
	if (a == b) cout << 0;
	else {
		cout << bfs(a, b);
	}
}