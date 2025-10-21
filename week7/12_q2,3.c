//q2

#include <stdio.h> 

int main() {

    short data[9] = {4, 6, 9, 8, 7, 2, 5, 1, 3};

    int sum = 0; 
    
    for (int i = 0; i < 9; i += 2) {
        sum += data[i]; 
    }
    printf("배열의 짝수 번째 요소의 최종 합: %d\n", sum);

    return 0; // 프로그램 정상 종료
}

//q3
#include <stdio.h> 

int main() {
    short data[9] = {4, 6, 9, 8, 7, 2, 5, 1, 3};

    short max_value = data[0]; 

    for (int i = 0; i < 9; i++) {
        if (data[i] > max_value) {
   
            max_value = data[i];
            
        }
    }

    printf("배열의 요소 중 가장 큰 값: %d\n", max_value);

    return 0; // 프로그램 정상 종료
}