#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int sum=0;
    for (int i=0;i<n;i++){
        sum+=a[i];
    }
    printf("%d",sum);

    double avg = (double) sum/n; // (double its called "Type Casting")
    printf("\nAverage = %0.4lf",avg);
    return 0;
}