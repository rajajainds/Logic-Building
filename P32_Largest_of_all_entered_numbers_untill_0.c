//keep taking input of numbers untill 0 is entered and print largest of all numbers using do-while loop

#include<stdio.h>

int main (){

    int num;
    int largest;

    do{
    printf("Enter a number:");
    scanf("%d",&num);
    largest= (largest>=num)?largest:num;
    }while(num!=0);

    printf("largest of all numbers is  : %d",largest);

    return 0;
}