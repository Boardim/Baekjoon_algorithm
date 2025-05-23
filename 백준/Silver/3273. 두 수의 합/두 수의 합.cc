#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int a;
	cin >> a;

	int temp;
	vector<int>vec;
	for (int i = 0; i < a; i++) {
		cin >> temp;
		vec.push_back(temp);
	}
	sort(vec.begin(), vec.end());

	int answer;
	cin >> answer;

	int left = 0;
	int right = a - 1;

	int cnt = 0;
	while (left < right) {
		int sum = vec[left] + vec[right];

		if (sum == answer) {
			cnt++;
			left++;
			right--;
		}
		else if (sum > answer) {
			right--;
		}
		else {
			left++;
		}

	}
	cout << cnt;
}