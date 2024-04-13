#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int arr[300000], n,sum(0);
	float round;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	round = static_cast<float>(n) * 0.15;
	int iround = round;
	if (round - iround >= 0.5) iround++;
	for (int i = iround; i < n - iround; i++) {
		sum = sum + arr[i];
	}
	double temp = sum;
	temp = temp / (n - iround * 2);

	if (temp - static_cast<int>(temp) >= 0.5) temp++;
	if (n == 0) cout << 0;
	else cout << static_cast<int>(temp);
}