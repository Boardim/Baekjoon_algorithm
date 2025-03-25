#include <iostream>
using namespace std;

int main() {
	int direction{ 0 }; // 0:->  1 : 위 2 : 왼 3 : 아래
	int n, t;
	cin >> n >> t;
	int time{ 0 }; string pos;
	int xpos{ 0 }, ypos{ 0 }, temp;
	for (int i = 0; i < n; i++) {
		temp = time;
		cin >> time >> pos;

		temp = time - temp;
		if (direction == 0) {
			xpos += temp;
		}
		else if (direction == 2) {
			xpos -= temp;
		}
		else if (direction == 1) {
			ypos += temp;
		}
		else ypos -= temp;

		if (pos == "right") direction +=3;
		else direction++;
		direction %= 4;
	}
	temp = t - time;
	if (direction == 0) {
		xpos += temp;
	}
	else if (direction == 2) {
		xpos -= temp;
	}
	else if (direction == 1) {
		ypos += temp;
	}
	else ypos -= temp;
	cout << xpos << " " << ypos;
}