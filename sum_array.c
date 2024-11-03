#include<stdio.h>
int main (){

    int a[5]={1,4,5,6,7};

    int sum_a=0;
    for (int i=0; i<=4;i++){
        sum_a+=a[i];

    }
    printf("Total Sum = %d",sum_a);

    return 0;
}