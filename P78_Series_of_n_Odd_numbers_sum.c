//find and print he sum of first n odd numbers in series

#include<stdio.h>

int main(){

    int numGiven=4; //number of first n odd numbers 
    int num = numGiven;

    int sum =(int)(num*(num));
    printf("The sum of first %d n Odd numebrs is : %d",numGiven,sum);


    return 0;
}
