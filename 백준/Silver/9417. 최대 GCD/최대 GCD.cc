#include <iostream>
#include <string>
#include <vector>
using namespace std;

int GCD(int x, int y) {
	if (x % y == 0) {
		return y;
	}
	return GCD(y, x % y);
}

int main() {
	int T;
	cin >> T;
	cin.ignore();
	vector<int> result;
	for (int i = 0; i < T; i++) {
		string input;
		vector<int>vec;
		getline(cin, input);

		string value = "";
		for (int i = 0; i <= input.size(); i++) {
			if (i == input.size() || input[i] == ' ') {
				vec.push_back(stoi(value));
				value = "";
			}
			else {
				value += input[i];
			}
		}
		
		int max = 0;
		for (int i = 0; i < vec.size() - 1; i++) {
			for (int k = i + 1; k < vec.size(); k++) {
				int temp = GCD(vec[i], vec[k]);
				if (temp > max) max = temp;
			}
		}
		result.push_back(max);

	}
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << "\n";
	}
}