#include <iostream>
using namespace std;
int main() {
    int N, K,arr[1001];
    cin >> N >> K;
    for (int i = 1; i <= N; i++) {
        arr[i] = i;
    }

    int k = 0;
    cout << "<";
    for (int i = 1; i <= N; i++) {
        int count{ 0 };
        while (count != K) {
            k++;
            if (k > N) k = k % N;
            if (arr[k] != 0) count++;
        }
        if (i != N) printf("%d, ", arr[k]);
        else printf("%d>", arr[k]);
        arr[k] = 0;
    }
}