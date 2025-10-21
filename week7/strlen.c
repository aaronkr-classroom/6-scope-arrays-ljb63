#include<stdio.h>
#include<string.h>
//c언어에서 strlen() 함수 이름이 있기때문에 다른 이름 사용

int string_length(char data[]){
    int count = 0;
    while (data[count]) count++;
    return count;
}

int main(void){
    int data_length, srt_length;
    char data[10] = {'h','a','p','p','y'};
    data_length = string_length(data);
    srt_length = strlen(data);      //배열 라이브러리 포함 필요

    printf("data length = %d\n", data_length);
    printf("str length - %d\n", srt_length);

    char data2[10] = {'a', 'b', 'c', 0, };
    char result[16];

    printf("Result:(0) %s", result);
    strcpy_s(result, strlen(data2), data2);     //result = abc
    printf("Result: (cpy)%s", result);
    strcat_s(result, strlen() "def");    //result = abcdf
    printf("Result: (cat)%s", result);
    return 0;
}