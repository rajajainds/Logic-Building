//print th fibonacci series upto n terms using do-while loop

#include<stdio.h>

int main(){

    int numOfTerms = 10;

    int last = 0;
    int current=1;
    int next;
    int count=0;

    do{
        printf("%d->",current);
        next=current+last;
        last=current;
        current=next;
        count++;
    }while(count<=numOfTerms);



    return 0;
}