#include <iostream>
using namespace std;

int main() {
	double a;
	int b;
	cin >> a >> b;
	bool check = true;
	while (b <= 100) {
		
		if (b % 2 == 0) {
			if (static_cast<int>(a / b) + 0.5 == a / b) {
				int start = static_cast<int>(a / b) - (b / 2);
				start++;
				if (start >= 0) {
					for (int i = 0; i < b; i++) {
						cout << start++ << " ";
					}
					break;
				}
			}
		}

		else if (b % 2 == 1) {
			if (static_cast<int>(a) % b == 0) {
				int start = (static_cast<int>(a) / b) - (b / 2);
				if (start >= 0) {
					for (int i = 0; i < b; i++) {
						cout << start++ << " ";
					}
					break;
				}
			}
		}
		
		b++;
	}
	if (b >= 101) cout << -1;
}