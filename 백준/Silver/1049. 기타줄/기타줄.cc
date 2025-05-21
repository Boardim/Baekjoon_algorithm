#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int min6 = 1000;
    int min1 = 1000;

    int a6, a1;
    for (int i = 0; i < M; i++) {
        cin >> a6 >> a1;

        if (min6 > a6) min6 = a6;
        if (min1 > a1) min1 = a1;
    }

    int price = 0;
    if (min6 <= (min1 * 6)) {
        price += N / 6 * min6;
        N = N % 6;
    }
    if (min6 <= min1 * N && N <=6) {
        price += min6;
        N = 0;
    }

    price += min1 * N;
    cout << price;
}