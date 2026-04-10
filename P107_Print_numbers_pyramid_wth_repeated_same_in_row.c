//print the numbers in repeated fashion as number in a row

#include<stdio.h>

int main(){

    int num=5;

   for(int i=1;i<=num;i++){
        

        for(int j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }



    return 0;
}