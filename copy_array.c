#include<stdio.h>
int a[100000],b[100000];
int main(){

    int len1,len2;
    scanf("%d",&len1);
    for(int i=0;i<len1;i++){

        scanf("%d",&a[i]);
    }
    for(int i=0;i<len1;i++){
        printf("%d",a[i]);
    }
    printf("\n");
    for(int i=0;i<len1;i++){
        printf("%d",b[i]);
    }
    printf("\nAfter Copy\n");
    for(int i=0;i<len1;i++){
        b[i]=a[i];
        printf("%d",b[i]);
        
        
    }
    len2=len1;
    printf("\n%d",len2);
    




    return 0;
}