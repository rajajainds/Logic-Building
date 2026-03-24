// print all factors of a number using While Loop

#include<stdio.h>

int main(){

    int numGiven = 56 ;
    int iterate = 1;
    
    while(iterate<=(int)(numGiven/2)){
        if (numGiven%iterate==0){
            printf("%d\n",iterate);
        }
        iterate++;

    }
    printf("%d",numGiven);


    return 0;
}