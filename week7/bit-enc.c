#include<stdio.h>
#include<string.h>   //문자열

/*
데이터 암호화
- 원본 데이터: data[i] = 5 (0101)
- 키: key = 3 (0011)
- XOR(^) 연산 후 결과: 0101 ^ 0011 = 0110
- 복호화: 0110 ^ 0011 = 0101
*/


void encrypt(char* data, char key){
    // data[i] != '\0' && i < strlen(data)
    for (int i = 0; data[i] != '\0'; i++)
    {
        data[i] = data[i] ^ key;  //A(ASKII 65) ^ M (78) 
    }

}

void decrypt(char* data, char key){
    //
    for (int i = 0; data[i] != '\0'; i++)
    {
        data[i] = data[i] ^ key;  //A(ASKII 65) ^ M (78) 
    }

}

int main(void){
    char plaintext[] = "Hanbat National University";    //문자열은 큰따옴표
    char key  = 'M';   

    printf("Original: %s\n", plaintext);
    encrypt(plaintext, key);

    printf("Encrypt: %s\n", plaintext);
    decrypt(plaintext, key);
    
    printf("Decrypt: %s\n", plaintext);


    return 0;
}