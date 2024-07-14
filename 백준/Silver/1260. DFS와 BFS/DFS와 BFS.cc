#include <iostream>
#include <queue>
using namespace std;

vector<int>dfs_result;
vector<int>bfs_result;

bool arr[1001][1001];
bool dfs_visit[1001];
bool bfs_visit[1001];

void dfs(int v) {
	dfs_visit[v] = true;
	dfs_result.push_back(v);
	for (int i = 1; i < 1001; i++) {
		if (arr[v][i] == true && dfs_visit[i] != true) {
			dfs(i);
		}
	}
}

void bfs(int v) {
	queue<int>q;
	q.push(v);
	bfs_visit[v] = true;
	while (!q.empty()) {
		v = q.front();
		bfs_result.push_back(v);
		q.pop();

		for (int i = 1; i < 1001; i++) {
			if (arr[v][i] == true && bfs_visit[i] != true) {
				bfs_visit[i] = true;
				q.push(i);
			}
		}
	}
}

int main() {
	int N, M, V;
	cin >> N >> M >> V;

	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		arr[a][b] = true;
		arr[b][a] = true;
	}
	dfs(V);
	for (int i = 0; i < dfs_result.size(); i++) {
		cout << dfs_result[i] << " ";
	}
	cout << endl;
	bfs(V);
	for (int i = 0; i < bfs_result.size(); i++) {
		cout << bfs_result[i] << " ";
	}
}