//calculate the factorial of the numbers from 1 upto n using for loop

#include<stdio.h>

int main(){

    int start=1;
    int end=6;

    int factorial=1;

    for(int i=1;i<=end;i++){
        factorial*=i;
        printf("factorial of %d is %d \n",i,factorial);
    }



    return 0;
}