#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N,arr[500000];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	int a,M;
	sort(arr, arr + N);
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> M;
		cout << upper_bound(arr, arr + N, M) - lower_bound(arr, arr + N, M) << " ";
		}
}