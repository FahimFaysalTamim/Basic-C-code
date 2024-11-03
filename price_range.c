#include<stdio.h>
int main(){

    int n,r1,r2;
    scanf("%d %d %d",&n,&r1,&r2);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int j=0;j<n;j++){
        if(arr[j]>=r1 && arr[j]<=r2){
            count+=1;
        }
    }
    printf("%d",count);

    return 0;
}