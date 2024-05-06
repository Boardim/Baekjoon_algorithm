#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int sorting(int a, int b) {
	return a < b;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, a, arr[8001]{ 0 }, max{ 0 }, check{ -1 }, save, max_val{ 0 }, min_val{ 8000 }, count{ 0 },mid;
	double sum{ 0 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		arr[a + 4000]++;
		sum += a;
	}
	double ave = round(sum / n);
	if (ave == -0) ave = 0;

	for (int i = 0; i <= 8000; i++) {
		if (arr[i] > 0 && i > max_val) max_val = i;
		if (arr[i] > 0 && i < min_val) min_val = i;

		if (arr[i] > 0 && count < n/2+1) {
			count = count + arr[i];
			if (count == n / 2 + 1 || count > n/2+1) mid = i - 4000;
		}

		if (arr[i] > max) {
			max = arr[i];
			check = 0;
			save = i - 4000;
		}
		else if (arr[i] == max && check == 0) {
				save = i - 4000;
				check++;
		}
	}

	cout << ave << "\n";
	cout << mid << "\n";
	cout << save << "\n";
	cout << max_val - min_val;
}