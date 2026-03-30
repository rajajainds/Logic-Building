//find and print the sum of fibonacci series upto n terme using for loop

#include<stdio.h>

int main(){


    int terms=6;

    int last=0;
    int current=1;
    int next;

    int sumOfFibonacci=0;

    for(int i=1;i<=terms;i++){
        printf("%d->",current); 
        sumOfFibonacci+=current;
        next=current+last;
        last=current;
        current=next;
    }
    printf("\nThe sum of %d terms of fibonacci series is %d",terms,sumOfFibonacci);


    return 0;
}
