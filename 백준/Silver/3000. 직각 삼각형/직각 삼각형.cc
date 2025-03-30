#include <iostream>
using namespace std;
int posX[100001];
int posY[100001];
 int countX[100001]{ 0 };
int countY[100001]{ 0 };
int main() {

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		posX[i] = x;
		posY[i] = y;
		countX[x]++;
		countY[y]++;
	}

	long long int count = 0;
	for (int i = 0; i < n; i++) {
		if (countX[posX[i]] != 1 && countY[posY[i]] != 1)
		{
			long long int a = countX[posX[i]] - 1;
			long long int b = countY[posY[i]] - 1;

			count += a * b;

		}
	}
	cout << count;
}