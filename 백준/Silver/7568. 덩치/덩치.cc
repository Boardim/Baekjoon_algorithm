#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num, cur{ 1 };
    pair<int, int>v[50];
    cin >> num;
    for (int i = 0; i < num; i++)
        cin >> v[i].first >> v[i].second;
    for (int i = 0; i < num; i++)
    {
        for (int k = 0; k < num; k++)
            if (v[i].first < v[k].first and v[i].second < v[k].second)
                cur++;
        cout << cur << ' ';
        cur = 1;
    }
}