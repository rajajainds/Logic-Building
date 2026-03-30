//calculate andprint fibonacci series from 1 upto n terms

#include<stdio.h>

int main(){

    int terms=15;

    int last=0;
    int current=1;
    int next;

    for(int i=1;i<=terms;i++){
        printf("%d->",current);
        next=current+last;
        last=current;
        current=next;
    }


    return 0;
}