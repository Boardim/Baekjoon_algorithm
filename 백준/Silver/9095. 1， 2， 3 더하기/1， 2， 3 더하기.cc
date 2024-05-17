#include <iostream>
using namespace std;

int main() {
	int arr[11] = { 1,2,4 };
	for (int i = 3; i < 11; i++) {
		arr[i] = arr[i - 3] + arr[i - 2] + arr[i - 1];
	}
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		cout << arr[a-1] << endl;
	}
}