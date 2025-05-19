#include <iostream>
#include <string>
using namespace std;

bool checking[50];

int main() {
	int n;
	cin >> n;
	string before;
	string after;
	cin >> before;
	for (int i = 1; i < n; i++) {
		cin >> after;

		for (int k = 0; k < before.size(); k++) {
			if (before[k] != after[k]) before[k] = '1';
		}
	}

	for (int i = 0; i < before.size(); i++) {
		if (before[i] == '1') cout << "?";
		else cout << before[i];
	}
}