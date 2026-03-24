// Print all numbers between a and b that are divisible by 7 usng While Loop

#include<stdio.h>

int main(){

    int start =7;
    int end =63;
    
    start++; //so the numbers are found in between start and end 
    while(start<end){
        if(start%7==0){
            printf("%d\n",start);

        }
        start++;
    }


    return 0;
}