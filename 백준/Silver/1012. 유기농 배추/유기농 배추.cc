#include <iostream>
using namespace std;

int arr[50][50];
int xpos, ypos;

void dfs(int x, int y) {
	arr[x][y] = 2;
	if (x < xpos-1) {
		if (arr[x + 1][y] == 1) dfs(x + 1, y);
	}
	if (x-1 >= 0) {
		if (arr[x - 1][y] == 1) dfs(x - 1, y);
	}
	if (y < ypos - 1 && arr[x][y+1] == 1) dfs(x, y + 1);
	if (y - 1 >= 0 && arr[x][y - 1] == 1) dfs(x, y - 1);
}

int main() {
	int T;
	int k, a, b;
	cin >> T;
	for (int j = 0; j < T; j++) {
		int answer{ 0 };
		cin >> xpos >> ypos >> k;
		for (int i = 0; i < k; i++) {
			cin >> a >> b;
			arr[a][b] = 1;
		}

		for (int i = 0; i < xpos; i++) {
			for (int k = 0; k < ypos; k++) {
				if (arr[i][k] == 1) {
					dfs(i, k);
					answer++;
				}
			}
		}
		cout << answer << endl;
		if (j != T - 1) {
			for (int i = 0; i < xpos; i++) {
				for (int k = 0; k < ypos; k++) {
					arr[i][k] = 0;
				}
			}
		}
	}
}