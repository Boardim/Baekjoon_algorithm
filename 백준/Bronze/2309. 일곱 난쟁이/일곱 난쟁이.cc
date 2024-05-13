#include<iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int arr[7];
	int a[9], sum{ 0 };
	for (int i = 0; i < 9; i++) {
		cin >> a[i];
		sum += a[i];
	}
	int temp = sum;
	for (int i = 0; i < 9; i++) {
		for (int k = i+1; k < 9; k++) {
			sum = temp;
			if (sum - a[i] - a[k] == 100) {
				int check = 0;
				for (int j = 0; j < 7; j++) {
					if (check == i) {
						check++;
					}
					if (check == k) {
						check++;
					}
					arr[j] = a[check];
					check++;
				}
				break;
			}
		}
	}
	sort(arr, arr + 7);
	for (int items : arr) {
		cout << items << endl;
	}
}