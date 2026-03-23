//print the fobinacci series upto n terms 

#include<stdio.h>

int main(){

    int terms = 9;
    int last=0;
    int iterate=1;

    printf("1->");
    terms-=1;

    while(terms){
        int next =iterate+last ;
        printf("%d->",(next));
        last=iterate;
        iterate=next;
        terms-=1;
    }

    return 0;
}