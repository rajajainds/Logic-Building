//print only 1-9,0 as n numbers repeating as per the number in nth row

#include<stdio.h>

int main(){
    int num =15;
    int iterate=0;

    for(int i=1;i<=num;i++){
       

        for(int j=1;j<=i;j++){
            iterate++;
            if(iterate==10){
                iterate=0;
            }

            printf("%d ",iterate);
        }
         printf("\n");

    }




    return 0;
}