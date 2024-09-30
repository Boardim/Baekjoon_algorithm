#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string aTemp;
string bTemp;
string a, b;
//a가 사이즈가 더 김.

void jeongsanghwa() {
	aTemp = a;
	bTemp = b;
	while (aTemp.size() < bTemp.size()) {
		aTemp += "0";
	}
	while (aTemp.size() > bTemp.size()) {
		bTemp += "0";
	}
}

string add() {
	string addAnswer = "";
	int carry = 0;
	int num;
	for (int i = 0; i < bTemp.size(); i++) {
		num = ((aTemp[i] - '0') + (bTemp[i] - '0') + carry) % 10;
		carry = ((aTemp[i] - '0') + (bTemp[i] - '0') + carry) /10;
		addAnswer += to_string(num);
	}
	if (carry != 0) {
		addAnswer += to_string(carry);
	}
	reverse(addAnswer.begin(), addAnswer.end());
	return addAnswer;
}

int main() {
	cin >> a >> b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	jeongsanghwa();

	cout << add();
}