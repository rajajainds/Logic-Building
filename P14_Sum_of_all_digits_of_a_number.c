//Calculate and print the product of all digits of a number 

#include<stdio.h>

int main(){

    long long int numGiven = 106778668668 ; 
    long long int num =numGiven ; //given number , product of all digits in it 
    int sumOfDigits = 0 ; 
    int digit = 1 ; // this will store each digit one by one 
 
    while (num){
        digit = num%10 ;
        num = num/10 ;
        sumOfDigits += digit ;

    } 

    printf("Sum of all digits of number %lld is : %d\n",numGiven,sumOfDigits);

    return 0;
}