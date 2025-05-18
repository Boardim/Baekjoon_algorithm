#include <iostream>
using namespace std;

char arr[100][100];
char cantarr[100][100];

bool visited[100][100];
bool visitedcant[100][100];

int wheelx[4] = { 0,0,1,-1 };
int wheely[4] = { 1,-1,0,0 };
int n;

void dfs(char before, int x, int y) {
	visited[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int dx = x + wheelx[i];
		int dy = y + wheely[i];

		if (dx >= 0 && dy >= 0 && dx < n && dy < n) {
			if (visited[dx][dy] == false && arr[dx][dy] == before) dfs(before, dx, dy);
		}
	}

}
void cantdfs(char before, int x, int y) {
	visitedcant[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int dx = x + wheelx[i];
		int dy = y + wheely[i];

		if (dx >= 0 && dy >= 0 && dx < n && dy < n) {
			if (visitedcant[dx][dy] == false && cantarr[dx][dy] == before) cantdfs(before, dx, dy);
		}
	}

}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			char wow;
			cin >> wow;
			arr[i][k] = wow;
			
			if (wow == 'G') {
				cantarr[i][k] = 'R';
			}
			else {
				cantarr[i][k] = wow;
			}
		}
	}
	
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			if (visited[i][k] == false) {
				dfs(arr[i][k], i, k);
				count++;
			}
		}
	}
	int count2 = 0;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			if (visitedcant[i][k] == false) {
				cantdfs(cantarr[i][k], i, k);
				count2++;
			}
		}
	}

	cout << count << " " << count2;

}