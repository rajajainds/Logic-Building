//check whether the given number is Prime or not 

#include<stdio.h>
#include<math.h>
int main(){
    int numGiven=30;

     int num = numGiven ;

     if(num>1){
       
    for(int i=2;i<=(int)sqrt(num);i++){
         if (num%i==0){
            printf("No, %d is not a prime number",num);
            return 0;
        }
    }
    }
    printf("Yes, %d is a prime number",num);

    return 0;
}