#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int m,n,num;
    cin >> m;
    int arr[500000];
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + m);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (binary_search(arr, arr + m, num)) cout << '1' << ' ';
        else cout << '0' << ' ';
    }
}