//Print from 1 to 100 and skip all numbers divisible by 5

#include<stdio.h>

int main(){

    int numSkip =5; // number at which we have to skip the loop

    for(int i=1;i<=100;i++){
       

        if(i%numSkip==0){
            continue;
        }

        printf("%d\n",i);

        }


    return  0;
}