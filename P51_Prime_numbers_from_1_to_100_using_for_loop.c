//print the prime numbers between 1 and 100 using For loop

#include<stdio.h>
#include<math.h>

int isPrime(int numGiven){
    int num = numGiven ;

     if(num>1){
       
    for(int i=2;i<=(int)sqrt(num);i++){
         if (num%i==0){
            return 0;
        }
    }
    }
    return 1;

}
int main(){

    for(int i=2;i<100;i++){
        if(isPrime(i)){
            printf("%d\n",i);
        }
    }



    return 0;
}