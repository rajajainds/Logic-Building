// print A to Z on nth row start form A alphabets upto n the nth alphabets 
// A
// AB
// ABC
// ABCD
// ...


#include<stdio.h>

int main(){

    int numLines=5;
   

     for(int i=1;i<=numLines;i++){
         int iterate=64;
        
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