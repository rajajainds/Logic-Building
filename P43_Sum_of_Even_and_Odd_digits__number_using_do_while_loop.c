// find and print the sum of add and even digits in a number using do-while loop

#include<stdio.h>

int main(){

     int numGiven = 345;
    int num=numGiven;

    int sumOfOddDigits=0;
    int sumOfEvenDigits=0;

    int digit;

    do{
        digit=num%10;
        num=num/10;
        if (digit%2==0){
            sumOfEvenDigits+=digit;
        }else {

            sumOfOddDigits+=digit ;
        }

    }while(num);

    printf("The sum of Even digits in number is %d\n",sumOfEvenDigits);
    printf("The sum of Odd digits in number is %d\n",sumOfOddDigits);

    return 0;
}