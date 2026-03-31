//print the numbers divisible by 7 between a and b using for loop

#include<stdio.h>

int main(){

    int start=4;
    int end=78;

    for(int i=start;i<end;i++){
        if(i%7==0){
            printf("%d\n",i);
        }
    }

    return 0;
}