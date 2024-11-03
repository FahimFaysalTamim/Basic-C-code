#include<stdio.h>
int a[100000];
int main(){
    int len1;
    scanf("%d",&len1);
    for(int i=0;i<len1;i++){

        scanf("%d",&a[i]);
    }
    
    int index,value;
    scanf("%d %d",&index,&value);
    len1++;
    
    for(int i=len1-1;i>=index;i--){//i>index
        a[i+1]=a[i]; // a[i]=a[i-1];
    }
    a[index]=value;

    for(int i=0;i<len1;i++){
        printf("%d ",a[i]);
    }




    return 0;
}