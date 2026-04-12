//print the centered shadow pyramid pattersn of stars

#include<stdio.h>

int main(){

    int numLines=5;

    for(int i=1;i<=numLines;i++){

        for(int m=1;m<=numLines-i;m++){
                  printf(" ");
             }

        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }

   
     for(int i=numLines-1;i>=1;i--){

        for(int m=1;m<=numLines-i;m++){
                  printf(" ");
             }

        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}