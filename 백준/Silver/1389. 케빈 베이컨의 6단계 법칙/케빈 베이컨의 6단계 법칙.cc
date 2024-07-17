#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<pair<int, int>>v; 
int arr[101][101];
int n, m;

void bfs(int x) {
	int sum = 0;
	int cnt[101]{ 0 };
	int visited[101]{ 0 };
	int count = 0;

	visited[x] = 1;

	queue<int>q;
	int value = x;
	q.push(value);
	while (!q.empty()) {
		value = q.front();
		q.pop();

		for (int i = 1; i <= n; i++) {
			if (visited[i] == 0 && arr[value][i] == 1) {
				q.push(i);
				visited[i] = 1;
				cnt[i] = cnt[value] + 1;
			}
		}
	}
	
	for (int i = 1; i <= n; i++) {
		sum += cnt[i];
	}
	v.push_back(make_pair(sum, x));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	for (int i = 1; i <= n; i++) {
		bfs(i);
	}
	auto answer = *min_element(v.begin(), v.end());
	cout << answer.second;
}