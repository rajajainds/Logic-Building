//Calculate and print the number of digits in a given number using While Loop

#include<stdio.h>

int main(){

    int numGiven = 100 ; 
    int num = numGiven ; //given number  
    int count = 0 ; // this will store count of each digit one by one 
    if (num != 0 ){
        
 
    while (num){
        num = num/10 ;
        count++ ;

    } 
    }else{
        count = 1;
    }

    printf("Total number of all digits in number %d is : %d\n",numGiven,count);

    return 0;
}