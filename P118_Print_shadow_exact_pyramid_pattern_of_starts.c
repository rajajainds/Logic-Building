//print the exact shadow pyramid pattersn of stars

#include<stdio.h>

int main(){

    int numLines=5;

    for(int i=1;i<=numLines;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    for(int k=numLines;k>=1;k--){
        for(int j=1;j<=k;j++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}