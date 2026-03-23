//find and print the sum of all terms in fibonacci series upto n terms 

#include<stdio.h>

int main(){

    int terms = 2;
    int last=0;
    int iterate=1;

    
    if (terms>=1){
        printf("1->");
    terms-=1;
    int sumFibo = 1;

    while(terms){
        int next =iterate+last ;
        printf("%d->",(next));
        last=iterate;
        iterate=next;
        terms-=1;
        sumFibo+=next;
    }
    printf("\nTotal sum is %d",sumFibo);
}else{
    printf("No fibonacci possible");
}

    return 0;
}