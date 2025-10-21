#include<stdio.h>

#define NUM_STDS 3
#define NUM_GRADES 4

float clacAvg(int data){
    int sum = 0;
    for (int i = 0; i < NUM_GRADES; i++)
    {
        sum += data[i];
    }
    return sum / (float)NUM_GRADES;
}

int main(void){
    int grades[NUM_STDS][NUM_GRADES] = {    //[3학생][4점수]
        {85, 45, 70, 93},  //학생1
        {74, 89, 39, 58},  //2
        {89, 44, 89, 89}   //3
    };

    //점수 출력
    printf("Student Grades: \n");
    for (int i = 0; i < NUM_STDS; i++)
    {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < NUM_GRADES; j++)
        {
            printf("%d ", grades[i][j]);
        }
        printf("Average: %.2f\n", clacAvg(grades[i]));
    }
    

    return 0;
}