//keep taking input of numbers untill 0 is entered and print sum of all numbers using do-while loop

#include<stdio.h>

int main (){

    int num;
    int sumOfNum;

    do{
    printf("Enter a number:");
    scanf("%d",&num);
    sumOfNum+=num;
    }while(num!=0);

    printf("Sum of all numbers : %d",sumOfNum);

    return 0;
}