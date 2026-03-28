#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* 진수변환
vector<int> makeDig(int num, int baseNum) {
    vector<int>ansVec;
    int divNum = baseNum;
    
    while(divNum * baseNum <= num) {
        divNum *= baseNum;
    }
    
    
    while(divNum > 1) {
        ansVec.push_back(num / divNum);
        num = num % divNum;
        
        divNum /= baseNum;
    }
    
    cout << endl;
    
    ansVec.push_back(num);
    return ansVec;
}
*/

int findNum(int num, int baseNum) {
    vector<int>vec;
    
    while(num > 0) {
        if(num %10 >= baseNum) return 0;
        
        vec.push_back(num % 10);
        num /= 10;
    }
    
    int answer = 0;
    int mulNum = 1;
    
    for(int k : vec) {
        answer += mulNum * k;
        mulNum *= baseNum;
    }
    
    return answer;

}

int main() {
    int N;
    cin >> N;
    
    int temp, num;
    for (int i = 1; i <= N; i++) {
        cin >> temp >> num;
        
        cout << i << " " << findNum(num, 8) << " " << num << " " << findNum(num, 16) << endl;
    }
}