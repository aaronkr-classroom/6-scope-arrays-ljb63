#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rand_num;    //전역변수

void gameInit(void){
    srand(time(0));    //1970/1/1 00:00 부터 현재까지 ms 값
    rand_num = rand() % 10 + 1;
}

void gmaePlay(void){
    //지역변수
    int guess = 0, count = 0, allowed = 5;

    printf("Guess the number 1 - 10 : \n");

    do
    {
        scanf_s("%d", &guess);
        count++;

        if (guess == rand_num)
        {
            printf("You Win!\n");
            break;
        }
        else if (guess < rand_num)
        {
            printf("Too low.. try again");
        }
        else if (guess > rand_num)
        {
            printf("Too high.. try again");
        }
    } while (count != allowed);

    if(count > allowed){
        printf("too many geuss.. you LOSE") ;  
    }
}

int main(void){
    gameInit();

    gamePlay();

    return 0;
}