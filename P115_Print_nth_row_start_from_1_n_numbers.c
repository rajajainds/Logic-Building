////print the numbers in from 1 to 0 as number in a row

#include<stdio.h>

int main(){

    int numlines=15;


   for(int i=1;i<=numlines;i++){
       int iterate=0;
        
        for(int j=1;j<=i;j++){
            iterate++;
            if(iterate==10){
                iterate=0;

            }
            printf("%d",iterate);
        }
        printf("\n");
    }


    return 0;
}