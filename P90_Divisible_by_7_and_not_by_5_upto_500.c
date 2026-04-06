//total count of number between 1 and 500 that are divisible by 7 but not by 5

#include<stdio.h>

int main(){

    int start=1;
    int end=500;
    int countTotal=0;

    for(int i=start;i<=end;i++){
        if(i%7==0 && i%5!=0 ){
            printf("%d->\n",i);
            countTotal++;
        }

    }

    printf("The total count of these numbers is %d",countTotal);


    return 0;
}