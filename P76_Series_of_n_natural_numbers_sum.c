//find and print he sum of first n natural numbers in series

#include<stdio.h>

int main(){

    int numGiven=14; //number of first n natural numbers 
    int num = numGiven;

    int sum =(int)(num*(num+1)/2);
    printf("The sum of first %d n natural numebrs is : %d",numGiven,sum);


    return 0;
}
