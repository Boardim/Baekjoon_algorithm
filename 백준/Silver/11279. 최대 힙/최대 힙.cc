#include <iostream>
using namespace std;

int heap[100001];
int heapCount;

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void heapAdd(int num) {
	heap[++heapCount] = num;

	int temp = heapCount;

	while (heap[temp] > heap[temp/2] && temp > 1) {
		swap(&heap[temp], &heap[temp / 2]);
		temp /= 2;
	}
}

void heapPop() {
	heap[1] = heap[heapCount];
	heap[heapCount] = 0;
	heapCount--;

	int parent = 1;
	int child = 2;
	child = (heap[child] > heap[child + 1]) ? child : child + 1;

	while (child <= heapCount && heap[parent] < heap[child]) {
		swap(&heap[parent], &heap[child]);

		parent = child;
		child *= 2;
		if (child + 1 <= heapCount) child = (heap[child] > heap[child + 1]) ? child : child + 1;
	}

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a == 0) {
			if (heapCount == 0) cout << 0 << "\n";
			else {
				cout << heap[1] << "\n";
				heapPop();
			}
		}
		else {
			if (heapCount == 0) {
				heap[1] = a;
				heapCount++;
			}
			else {
				heapAdd(a);
			}
		}
	}
}