// print A to Z  on nth row same alphabets n times
// A
// BB
// CCC
// DDDD
// ...


#include<stdio.h>

int main(){

    int numLines=9;
    int iterate=64;

     for(int i=1;i<=numLines;i++){
        iterate++;
            if(iterate==91){
                iterate=65;
            }
       
        for(int j=1;j<=i;j++){
            

            printf("%c ",(char)iterate);
        }
         printf("\n");

    }




    return 0;
}