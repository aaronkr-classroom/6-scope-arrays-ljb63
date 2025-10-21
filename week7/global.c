#include<stdio.h>

int result;

int sum(int x, int y){
    result = x + y;
}


int main(void){
    int a = 3, b = 5;
    result = sum(a, b);
    printf("%d + %d + %d", a, b ,result);

    return 0;
}