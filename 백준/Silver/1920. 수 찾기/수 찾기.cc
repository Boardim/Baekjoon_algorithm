#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int check;
    int M;
    cin >> M;
    for (int i = 1; i <= M; i++) {
        cin >> check;
        if (binary_search(v.begin(), v.end(), check)) {
            cout << "1" << "\n";
        }
        else cout << "0" << "\n";
    }
}