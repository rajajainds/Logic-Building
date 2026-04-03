//take input from user and print all the numbers until a negatve number hits 

#include<stdio.h>

int main(){
    int input;
    int list[100];
    int i=0;

    do{
        printf("Enter a number :");
        scanf("%d",&input);
        if(input>=00){
        list[i]=input;
        i++;
        }

    }while(input>=0);

    int j=0;

    while(i>j){
        printf("%d\n",list[j]);
        j++;
    }

    return 0;
}