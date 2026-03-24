//find and print the sum of all factors of a number 

#include<stdio.h>

int main(){

    int numGiven = 56 ;
    int iterate = 1;
    int sumOfFactors = numGiven;
    while(iterate<=(int)(numGiven/2)){
        if (numGiven%iterate==0){
            sumOfFactors+=iterate;
        }
        iterate++;

    }
    printf("Sum of all factors of number %d is %d ",numGiven,sumOfFactors);






    return 0;
}