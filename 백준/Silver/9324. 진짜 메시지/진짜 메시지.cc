#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;
		int arr[26]{ 0 };
		bool check = true;

		for (int k = 0; k < input.size(); k++) {
			int temp = input[k] - 'A';
			arr[temp]++;

			if (arr[temp] % 3 == 0) {
				if (input[k + 1] != input[k]) {
					check = false;
					break;
				}
				k++;
			}
		}

		if (check) cout << "OK\n";
		else cout << "FAKE\n";
	}
}