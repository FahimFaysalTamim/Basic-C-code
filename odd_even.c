#include<stdio.h>
int main(){
    
    for(int i=1;i<=100;i++){

        if(i%2==0){
            printf("%d Even number\n",i);
        }else{
            printf("%d odd Number\n",i);
            
        }
    }

    return 0;
}