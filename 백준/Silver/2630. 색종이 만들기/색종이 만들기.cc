#include <iostream>
using namespace std;


int answer[2];
bool find(int list[][128], int startx, int starty, int endx, int endy);
void divide(int list[][128], int startx, int starty, int endx, int endy) {
		if (find(list, startx, starty, endx, endy)) {
			return;
		}
		int midx = (startx + endx) / 2;
		int midy = (starty + endy) / 2;
		divide(list, startx, starty, midx, midy);
		divide(list, midx + 1, starty, endx, midy);
		divide(list, startx, midy + 1, midx, endy);
		divide(list, midx + 1, midy + 1, endx, endy);
	
}

bool find(int list[][128], int startx, int starty, int endx, int endy) {
	int temp = list[startx][starty];
	for (int i = startx; i <= endx; i++) {
		for (int k = starty; k <= endy; k++) {
			if (list[i][k] != temp) return false;
		}
	}
	answer[temp]++;
	return true;
}

int main() {
	int arr[128][128]{ 0 };
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			cin >> arr[i][k];
		}
	}
	divide(arr, 0, 0, n-1,n-1);
	cout << answer[0] << "\n" << answer[1];
}