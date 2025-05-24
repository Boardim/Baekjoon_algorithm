#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cout.tie(NULL);
	int N;
	cin >> N;
	priority_queue<int, vector<int>, greater<int>>pq;

	int temp;
	for (int i = 0; i < N * N; i++) {
		cin >> temp;
		pq.push(temp);
		if (pq.size() > N) {
			pq.pop();
		}
	}
	cout << pq.top();
}