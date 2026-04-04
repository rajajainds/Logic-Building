//find and print he sum of first n even numbers in series

#include<stdio.h>

int main(){

    int numGiven=4; //number of first n natural numbers 
    int num = numGiven;

    int sum =(int)(num*(num+1));
    printf("The sum of first %d n Even numebrs is : %d",numGiven,sum);


    return 0;
}
