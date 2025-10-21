//q2
#include<stdio.h>

int restult;

void Test(){
    int result = 5;  //지역변수
    result++;
}

int main(void){
    Test();
    printf("rsult = %d", result);  // 0, 전역 변수 사용 때문
    return 0;
}