//get 5 numbers as input and skip any 0 number and find sum of remaining numbers 

#include<stdio.h>

int main(){

    int skip =0;

    int input[5];
    int sum=0;


    for(int i=0;i<5;i++){
        printf("Enter number [%d] :",i+1);
        scanf("%d",&input[i]);
    }
        
      for(int i=0;i<5;i++){
        if(input[i]==0){
            continue;
        }
        sum+=input[i];
    }

    printf("The sum of non zero numbers is %d",sum);


    return 0;
}