#include<stdio.h>
#include<string.h>
int main(){
    char str[100],rev[100];
    scanf("%s",&str);
    int n=strlen(str);
    char arr=str[100];
    for(int i=0;i<n;i++){
         rev[i]=str[n-1-i];
    }
    if(rev==arr[100]){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}