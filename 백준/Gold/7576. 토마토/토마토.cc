#include <iostream>
#include <queue>
using namespace std;

int arr[1000][1000];
int visited[1000][1000];
int a, b;
int howmany;

int plusx[4] = { 0,0,1,-1 };
int plusy[4] = { 1,-1,0,0 };

int bfs(queue<pair<int, int>>&q) {
	int max = 1;

	while (!q.empty()) {
		howmany++;
		int orix = q.front().first;
		int oriy = q.front().second;

		if (max < visited[orix][oriy]) max = visited[orix][oriy];
		q.pop();

		for (int i = 0; i < 4; i++) {
			int dx = orix + plusx[i];
			int dy = oriy + plusy[i];
			

			if (dx >= 0 && dy >= 0 && dx < a && dy < b && visited[dx][dy] == 0 && arr[dx][dy] != -1) {
				if (arr[dx][dy] == 0) {
					visited[dx][dy] = visited[orix][oriy] + 1;
				}
				else visited[dx][dy] = visited[orix][oriy];
				q.push({ dx,dy });
			}

		}
	}
	return max - 1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> a >> b;

	int startx, starty = -1;
	queue<pair<int, int>>q;
	bool check = true;
	for (int i = 0; i < b; i++) {
		for (int k = 0; k < a; k++) {
			cin >> arr[k][i];
			if (arr[k][i] == 1) {
				q.push({ k,i });
				visited[k][i] = 1;
				check = false;
			}
			else if (arr[k][i] == -1) howmany++;
		}
	}

	if (check) cout << -1;
	else {
		int max = bfs(q);
		

		if (howmany != a * b) {
			cout << -1;
		}
		else if (max == 0) cout << 0;
		else cout << max;
	}
}