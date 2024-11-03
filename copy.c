#include<stdio.h>
#include<string.h>

int main() {
    char s1[101], s2[101], s3[101];
    
    scanf("%s %s %s", s1, s2, s3);
    
    char* min_str = s1;
    char* max_str = s1;
    
    if (strcmp(s2, min_str) < 0) {
        min_str = s2;
    }
    if (strcmp(s2, max_str) > 0) {
        max_str = s2;
    }
    if (strcmp(s3, min_str) < 0) {
        min_str = s3;
    }
    if (strcmp(s3, max_str) > 0) {
        max_str = s3;
    }
    
    printf("%s\n", min_str);
    printf("%s\n", max_str);
    
    return 0;
}
