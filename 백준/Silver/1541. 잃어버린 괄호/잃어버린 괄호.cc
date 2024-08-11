#include <iostream>
#include <string>
using namespace std;
int main() {
	int result = 0;
	string num = "";

	string n;
	getline(cin, n);
	bool checking = false;


	for (int i = 0; i <= n.size(); i++) {
		if (n[i] == '+' || n[i] == '-' || i == n.size()) {
			if (checking == true) {
				result -= stoi(num);
			}
			else result += stoi(num);
			num = "";
		}
		else {
			num += n[i];
		}

		if (n[i] == '-') checking = true;
	} 
	cout << result;
}