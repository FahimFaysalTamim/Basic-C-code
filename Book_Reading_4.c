#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,time;
    scanf("%d %d",&n,&time);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    int count =0;
    for(int j=0;j<n;j++){
        sum+=arr[j];
        if (sum<=time){
            count+=1;
        }
    }
    printf("%d %d",count);



    return 0;
}