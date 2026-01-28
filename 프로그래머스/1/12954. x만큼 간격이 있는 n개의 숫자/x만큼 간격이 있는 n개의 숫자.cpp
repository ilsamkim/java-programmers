#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int y = x;
    
    for(int i = 1; i < n+1; i++){
        answer.push_back(y);
        y += x;
    }   
    
    return answer;
}