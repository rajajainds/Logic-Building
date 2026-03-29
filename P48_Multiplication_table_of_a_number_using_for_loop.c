//print the multiplcation table of a number using for loop

#include<stdio.h>

int main(){

    int numGiven= 13;

    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",numGiven,i,numGiven*i);
    }

    return 0;
}