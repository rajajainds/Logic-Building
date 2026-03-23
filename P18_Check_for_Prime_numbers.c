//check whether a given number is Prime Number 

#include<stdio.h>
#include<math.h>

int main(){
     

    int numGiven = 31 ;
    int num = numGiven ;

     if(num<=1){
        printf("No , %d is not a prime number ",numGiven);
    }else{

    int iterate = 2;
    while(iterate <= (int)sqrt(num)){
        if (num%iterate==0){
            printf("No , %d is not a prime number ",numGiven);
            return 0;
        }
        iterate++;
    }

    printf("Yes , %d is a prime number ",numGiven);
    
    
    }



    return 0;
}