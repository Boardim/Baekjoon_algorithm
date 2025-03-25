#include <iostream>
#include <vector>
using namespace std;

int main() {
	int R, C;
	cin >> R >> C;

	string arr[20];
	vector<string>wordlist;

	for (int i = 0; i < R; i++) {
		cin >> arr[i];
	}

	
	//가로로 진행
	for (int i = 0; i < R; i++) {
		string temp1 = "";
		for (int k = 0; k <= C; k++) {
			// # 이전까지 모은 단어가 2글자 이상인지 확인
			if (k == C || arr[i][k] == '#' ) {
				if (temp1.size() >= 2) {
					wordlist.push_back(temp1);
				}
				temp1 = "";
			}
			else {
				temp1 += arr[i][k];
			}
		}
	}

	//세로로 진행
	for (int i = 0; i < C; i++) {
		string temp1 = "";
		for (int k = 0; k <= R; k++) {
			// # 이전까지 모은 단어가 2글자 이상인지 확인
			if (k == R || arr[k][i] == '#') {
				if (temp1.size() >= 2) {
					wordlist.push_back(temp1);
				}
				temp1 = "";
			}
			else {
				temp1 += arr[k][i];
			}
		}
	}
	string cpr = wordlist[0];
	for (int i = 1; i < wordlist.size(); i++) {
		if (cpr > wordlist[i]) cpr = wordlist[i];
	}

	cout << cpr;

}