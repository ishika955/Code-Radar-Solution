#include<stdio.h>
#include<string.h>
int main(){
    char str[100],rev[100];
    scanf("%s",&str[100]);
    int n= strlen(str);
    for(int i=0;i<n;i++){
           rev[i]=str[n-1-i];
    }
    // rev[n]='\0';
    printf("%s",rev);
    
    return 0;
}