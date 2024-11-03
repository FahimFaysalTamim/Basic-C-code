#include<stdio.h>
int main(){
    int r,c,x;
    scanf("%d %d %d",&r,&c,&x);
    int count[1000]={0};
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int value;
            scanf("%d",&value);
            count[value]++;
        }
    }
    for(int i=0;i<x;i++){
        int number;
        scanf("%d",&number);
        printf("%d\n",count[number]);

    }


    return 0;
}