#include <iostream>
using namespace std;

int temparr[500000];
int arr[500000];
int cnt{ 0 };
int goal;
bool check = false;

void merge(int[], int, int, int);
void merge_sort(int list[], int min, int max) {

	int mid = (min + max) / 2;
	if (min < max) {
		merge_sort(list, min, mid);
		merge_sort(list, mid + 1, max);
		merge(list, min, mid, max);
	}
}

void merge(int list[], int min, int mid, int max) {
	int i, j, l;
	i = min;
	j = mid + 1;
	l = min;

	while (i <= mid && j <= max) {
		if (list[i] > list[j]) {
			temparr[l++] = list[j++];
			++cnt;
		}
		else {
			temparr[l++] = list[i++]; ++cnt;
		}

		if (cnt == goal) {
			cout << temparr[l - 1];
			check = true;
			return;
		}
	}

	while (i <= mid) {
		temparr[l++] = list[i++];
		if (++cnt == goal) {
			cout << temparr[l - 1];
			check = true;
			return;
		}

	}
	while (j <= max) {
		temparr[l++] = list[j++];
		if (++cnt == goal) {
			cout << temparr[l - 1];
			check = true;
			return;
		}
	}

	for (int q = min; q <= max; q++) {
		list[q] = temparr[q];
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a;
	cin >> a >> goal;

	
	for (int i = 0; i < a; i++) {
		cin >> arr[i];
	}
	merge_sort(arr, 0, a - 1);
	if (!check) cout << -1 << "\n";
}