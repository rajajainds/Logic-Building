//print the sum of odd digits and even digits of a number

#include<stdio.h>

int main(){

    int numgiven = 375;
    int num=numgiven;

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