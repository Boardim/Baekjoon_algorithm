#include <iostream>
using namespace std;
int main() {
	long long int arr[101]{ 0,1,1,1 };
	for (int i = 4; i <= 100; i++) {
		arr[i] = arr[i - 3] + arr[i - 2];
	}
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		cout << arr[a] << endl;
	}
}