// sum of digits of a number using do-while loop

#include<stdio.h>

int main(){

    int numGiven = 345;
    int num=numGiven;
    int sumOfDigits=0;

    int digit;

    do{
        digit=num%10;
        num=num/10;
        sumOfDigits+=digit ;

    }while(num);

    printf("The sum of all digits in number is %d",sumOfDigits);


    return 0;
}