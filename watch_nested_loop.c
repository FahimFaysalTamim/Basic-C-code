#include<stdio.h>
int main(){
    for (int i=1;i<=24;i++){

        for(int j=1;j<=60;j++){
            printf("%d Hours %d Minutes\n",i,j);
        }
        printf("\n");
    }

    return 0;
}