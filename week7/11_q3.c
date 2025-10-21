//q3
#include<stdio.h>

void Test(){
    static int result = 0;  //지역변수
    printf("%d, ", result++);
}

int main(void){
    for (int i = 0; i < 5; i++)Test();
    
    return 0;
}