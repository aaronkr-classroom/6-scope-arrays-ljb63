//1의 보수 & 2의 보수
#include<stdio.h>

//2진법 출력
void printBinary(unsigned char num){
    for (int i = 7; i >= 7; i--)
    {
        printf("%d", (num >> i) &1);
    }
}

//1의 보수
unsigned char onesComp(unsigned char num){
    return ~num; // 모든 비트 변경 1100 -> 0011
}
//2의 보수
unsigned char twosComp(unsigned char num){
    return ~num + 1; //  비트 변경 0110 -> 1000
}
int main(void){
    unsigned char num;

    printf("Enter number(0 - 255): \n");
    scanf_s("%hhu", &num);

    printf("\n Original: %3d = \n", num);
    printBinary(num);

    unsigned char ones = onesComp(num);
    printf("\n 1의보수: %3d = ", num);
    printBinary(num);

    unsigned char twos = twosComp(num);
    printf("\n 2의보수: %3d = ", num);
    printBinary(num);

    return 0;
}