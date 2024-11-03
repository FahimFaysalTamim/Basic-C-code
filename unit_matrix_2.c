#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int diagonal=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int value;
            scanf("%d",&value);
            if((i==j && value!=1) || (i!=j && value!=0)){
                diagonal=0;
                
            }

        }
    }
    if (diagonal==1){
        printf("YES");

    }
    else{
        printf("NO");
    }


    return 0;
}