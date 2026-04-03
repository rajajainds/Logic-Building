//print all even numbers and skip any odd number between 1 and 100

#include<stdio.h>

int main(){
    int start=1;
    int end=100;


    for(int i=start;i<end;i++){
        if(i%2!=0){
            continue;
        }

        printf("%d\n",i);
    }



    return 0;
}