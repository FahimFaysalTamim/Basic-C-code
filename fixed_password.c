#include<stdio.h>
int main(){
    int input;
    for (int i=1; i<10000;i++){

        scanf("%d",&input);

        if(input==1999){
            printf("Correct\n");
            break;
        }else{
            printf("Worng\n");
        }
    }

    return 0;
}