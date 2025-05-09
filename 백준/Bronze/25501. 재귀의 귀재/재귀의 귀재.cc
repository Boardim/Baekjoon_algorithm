#include <iostream>
#include <cstring>
using namespace std;


int cnt;
int recursion(const char* s, int l, int r) {
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else { 
        cnt++;
        return recursion(s, l + 1, r - 1);
    }
}

int isPalindrome(const char* s) {
    cnt = 1;
    return recursion(s, 0, strlen(s) - 1);
}


int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char s[1001];
        cin >> s;
        cout << isPalindrome(s) << " " << cnt << "\n";
    }
}