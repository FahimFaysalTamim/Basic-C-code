#include<stdio.h>
int main(){

    char a;

    scanf("%c",&a);
    if (a>='a' && a<='z'){
        printf("Small");
    
    }else if(a>='A' && a<='Z'){
        printf("Capital");
    }

    return 0;

}