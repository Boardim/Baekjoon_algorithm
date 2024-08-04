#include <iostream>
using namespace std;

int heap[100001];
int heapCount = 0;


void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void push(int num) {
	heap[++heapCount] = num;

	int index = heapCount;
	int child = heapCount;
	int parent = heapCount / 2;
	while (child != 1 && heap[parent] > heap[child]) {
		swap(&heap[child], &heap[parent]);
		child /= 2;
		parent /= 2;
	}
}

void pop() {
	swap(&heap[1], &heap[heapCount]);
	heapCount--;

	int parent = 1;
	int child = parent * 2;
	if(child + 1 <= heapCount) child = (heap[child] < heap[child+1]) ? child : child+1;

	while (child <= heapCount && heap[parent] > heap[child]) {
		swap(&heap[parent], &heap[child]);

		parent = child;
		child *= 2;
		if (child + 1 <= heapCount) child = (heap[child] < heap[child + 1]) ? child : child + 1;
	}
}

int main() {
	int n;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		if (num == 0) {
			if (heapCount == 0) cout << 0 << "\n";
			else {
				cout << heap[1] << "\n";
				heap[1] = 0;
				pop();
			}
		}

		else if (heap[1] == 0) {
			heap[1] = num;
			heapCount++;
		}

		else {
			push(num);
		}
	}
}