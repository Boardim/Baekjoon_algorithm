#include <iostream>

using namespace std;


int main() {
	int x;
	int y;
	cin >> x >> y;
	int percent = 100LL * y / x;
	int start = 0;
	int end = x;
	int mid;
	int result = -1;

	
	while (start <= end) {
		mid = (start + end) / 2;
		int temp = 100LL * (y + mid) / (x + mid);
		if (temp > percent) {
			result = mid;
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	cout << result;
}