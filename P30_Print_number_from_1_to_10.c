// print all numbers from 1 to 10 using do-while loop

#include<stdio.h>

int main(){

    int start = 1;
    int end =10 ;

    do{
        printf("%d\n",start);
        start++;
    }while(start<=end);

    return 0;
}