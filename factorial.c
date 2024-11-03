#include<stdio.h>
int main(){

    int n,a,i,j;
    scanf("%d",&n);
    
    
    for( i=1;i<=n;i++){
        scanf("%d",&a); 
        long long f=1;
        if(a==0){
            f=1;
        }else{
            for(j=1;j<=a;j++){
                f=j*f;

            }
             

        }
        
        printf("%d\n",f);  
    }
    

    return 0;
}