#include<stdio.h>
#include<string.h>
int main(){
    char str[100],rev[100];
    scanf("%s",&str);
    int n=strlen(str);
    for(int i=0;i<n;i++){
         rev[i]=str[n-1-i];
    }
    if(rev==str){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}