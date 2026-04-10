// print 1 and 0 alternatively as n number in nth row 

#include<stdio.h>

int main(){

    int num=6;
    int iterate=0;

     for(int i=1;i<=num;i++){
       

        for(int j=1;j<=i;j++){
            iterate++;
            if(iterate==2){
                iterate=0;
            }

            printf("%d ",iterate);
        }
         printf("\n");

    }




    return 0;
}