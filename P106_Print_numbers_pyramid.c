//print the numbers pyraid in incresing order o numbers 

#include<stdio.h>

int main(){


    int num=6;

    for(int i=1;i<=num;i++){
        printf("\n");

        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
    }



    return 0;
}