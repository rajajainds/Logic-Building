// print the number triangle upto n number


#include<stdio.h>


int main(){

    int numGiven = 6;

    for(int i=1;i<=numGiven;i++){
        printf("\n");
        for(int j=1;j<=i;j++){
            printf("%d",i);
        }

    }

    return 0;
}