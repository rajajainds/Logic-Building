//find and print the smallest digit in a number 

#include<stdio.h>

int main(){

    int numGiven = 1345 ;
    int num = numGiven ;

    int digit ; // stores evry digit one by one 
    int largest = 0 ;

    while(num>0){
        digit = num%10 ;
        num = num/10;
        largest = (digit>=largest) ? digit : largest ;
    }
    printf("The Largest digit in %d is %d",numGiven,largest);


    return 0;
}