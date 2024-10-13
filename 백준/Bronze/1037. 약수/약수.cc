#include <iostream>
#include <algorithm>
using namespace std;
int arr[50];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int min, max;
	min = *min_element(begin(arr), arr+n);
	max = *max_element(begin(arr), arr+n);
	cout << min * max;

}