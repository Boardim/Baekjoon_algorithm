#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int map[1000][1000];
int n, m;
int desx, desy;
int solveMap[1000][1000];
int visited[1000][1000];
int varx[4] = { 0, 0, 1, -1};
int vary[4] = { 1, -1, 0, 0 };


void find(int curx, int cury) {
	queue<pair<int, int>>q;

	q.push({ curx, cury });
	visited[curx][cury] = 1;
	while (!q.empty()) {
		int cnt = 0;
		int posx = q.front().first;
		int posy = q.front().second;

		q.pop();

		for (int i = 0; i < 4; i++) {
			int dx = posx + varx[i];
			int dy = posy + vary[i];

			if (dx >= 0 && dy >= 0 && dx < n && dy < m ) {
				if (visited[dx][dy] == 0 && map[dx][dy] != 0) {
					visited[dx][dy] = visited[posx][posy] + 1;
					q.push({ dx,dy });
				}
			}

		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {
			cin >> map[i][k];
			if (map[i][k] == 2) {
				desx = i;
				desy = k;
			}
		}
	}
	find(desx, desy);

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {
			if (map[i][k] == 0 || map[i][k] == 2) {
				cout << 0 << " ";
			}
			else cout << visited[i][k] - 1 << " ";
		}
		cout << "\n";
	}

}