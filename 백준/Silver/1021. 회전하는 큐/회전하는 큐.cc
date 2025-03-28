#include <iostream>
#include <deque>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	deque<int>deq;
	for (int i = 0; i < n; i++) {
		deq.push_back(i + 1);
	}
	
	int count = 0;
	int sum = 0;
	while (count != m) {
		int num;
		cin >> num;
		int size = deq.size();

		int index= 0;
		for (int i = 0; i < size; i++) {
			if (deq.front() == num) {
				index = i;
				deq.pop_front();
				break;
			}
			else {
				int temp = deq.front();
				deq.pop_front();
				deq.push_back(temp);
			}
		}

		if (index > size - index) {
			index = size - index;
		}
		sum += index;
		count++;
	}
	cout << sum;
}