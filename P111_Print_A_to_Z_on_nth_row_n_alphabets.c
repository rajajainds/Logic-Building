// print A to Z  on nth row n alphabets 

#include<stdio.h>

int main(){

    int numLines=9;
    int iterate=64;

     for(int i=1;i<=numLines;i++){
       

        for(int j=1;j<=i;j++){
            iterate++;
            if(iterate==91){
                iterate=65;
            }

            printf("%c ",(char)iterate);
        }
         printf("\n");

    }




    return 0;
}