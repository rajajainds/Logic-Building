//print all the prime numbers upto n using nested loops 

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
    int numTerms=65;

 for(int i=2;i<numTerms;i++){
        if(isPrime(i)){
            printf("%d\n",i);
        }
    }


    return 0;
}


