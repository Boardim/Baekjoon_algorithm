#include <iostream>
using namespace std;
bool arr[1000001];
// true라면 합성수, false라면 소수
int main() {
	arr[1] = true;
	for (int i = 2; i <= 1000; i++) {
		bool check = true;
		for (int k = 2; k < i; k++) {
			if (i % k == 0) {
				check = false;
				break;
			}
		}
		if (check) {
			int num = i + i;
			while (num <= 1000000) {
				arr[num] = true;
				num += i;
			}
		}
	}

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {

		int count = 0;

		int num;
		cin >> num;
		if (num == 4) count++;
		for (int k = 3; k <= num / 2; k +=2) {
			if (arr[k] == false && arr[num-k] == false) {
				count++;
			}
		}
		cout << count << "\n";
	}
}