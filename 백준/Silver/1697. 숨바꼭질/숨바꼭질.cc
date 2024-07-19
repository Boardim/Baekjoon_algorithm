#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool visited[100001];

int dfs(int a, int b) {
	visited[a] = true;
	queue<int>q;
	q.push(a);

	int time[100001]{ 0 };

	while (!q.empty()) {
		int temp = q.front();
		q.pop();
		if (temp == b) return time[b];

		if (temp / 2 > b) {
			q.push(temp - 1);
			visited[temp - 1] = true;
			time[temp - 1] = time[temp] + 1;
			continue;
		}
		if (temp - 1 >= 0 && visited[temp - 1] == false) {
			q.push(temp - 1);
			visited[temp - 1] = true;
			time[temp - 1] = time[temp] + 1;
		}
		if (temp + 1 <= 100000 && visited[temp + 1] == false) {
			q.push(temp + 1);
			visited[temp + 1] = true;
			time[temp + 1] = time[temp] + 1;
		}
		if (temp * 2 <= 100000 && visited[temp * 2] == false ) {
			q.push(temp * 2);
			visited[temp * 2] = true;
			time[temp * 2] = time[temp] + 1;
		}
	}
	return 0;
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << dfs(a, b);
}