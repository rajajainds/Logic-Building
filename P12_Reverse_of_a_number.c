//Find and print the reverse of a given number using While Loop

#include<stdio.h>
#include<string.h>

int main(){

    int numGiven = 2321 ;
    int num = numGiven ; //given number 
    int reverseNum = 0  ;

//logic - here 
//num = 567
// num = num/10 => 56 , % gives 7
// reverseNum = reverseNum*10 + num%10 ;

    while (num){
        reverseNum = reverseNum*10 + num%10 ;
        num = num/10 ;
    }
    
    printf("Reverse of the given number %d is : %d\n",numGiven,reverseNum);

    return 0;
}