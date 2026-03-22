//Check whether the given number is palindrome 

#include<stdio.h>

int main(){

    int numGiven = 217 ;
    int num = numGiven ; //given number 
    int reverseNum = 0  ;

    while (num){
        reverseNum = reverseNum*10 + num%10 ;
        num = num/10 ;
    }
    
    printf("Reverse of the given number %d is : %d\n",numGiven,reverseNum);
    if (numGiven == reverseNum){
    printf("Yes it is Palindrome number ");
    }else {
        printf("No it is not a Palindrome number ");
    }
    return 0;
}