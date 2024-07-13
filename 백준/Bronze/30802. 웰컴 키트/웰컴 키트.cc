#include <iostream>

using namespace std;
int main() {
	int N, T, P;
	int size[6]{ 0 }, count{ 0 };
	cin >> N;
	for (int i = 0; i <= 5; i++) {
		cin >> size[i];
	}
	cin >> T >> P;

	for (int i = 0; i < 6; i++) {
		if (size[i] % T == 0) count += size[i] / T;
		else count += size[i] / T + 1;
	}
	cout << count << endl << N / P << " " << N % P;
}