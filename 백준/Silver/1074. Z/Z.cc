#include <iostream>
#include <cmath>
using namespace std;

int N, r, c;
int answer{ 0 };

void square(int x, int y, int size) {
	if (c == x && r == y) {
		cout << answer;
		return;
	}
	else if (c >= x && r >= y && c < x + size && r < y + size) {
		int temp = size/2;
		square(x, y, temp);
		square(x + temp, y, temp);
		square(x, y + temp, temp);
		square(x + temp, y + temp, temp);
	}
	else {
		answer = answer + size * size;
	}
}

int main() {
	cin >> N >> r >> c;
	square(0, 0, pow(2,N));
}