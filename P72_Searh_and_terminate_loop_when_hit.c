//search for a number in a input list and exit loop when hit the number 

#include<stdio.h>

int main(){

    int list[5]={1,7,4,0,6};

    for(int i=0;i<5;i++){

        if(list[i]==0){
            break;
        }
        printf("%d\n",list[i]);
    }





    return 0;
}