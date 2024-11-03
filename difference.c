#include<stdio.h>
int main(){
    int a,b;
    int *x=&a,*y=&b;
    scanf("%d %d",&a,&b);
    int difference=abs(*x-*y);
    int *diff=&difference;
    printf("%d",*diff);
    printf("\n%d",x);


    return 0;
}