#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int i = n;
    while(i > 0){
        if(n%i == 0){
            answer = answer + i;
        }            
        i -= 1;
    }
    return answer;
}