#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",&str);
    int n=strlen(str);
    int count=0;
    for(int i=0;i<n;i++){
        if(str[i]=='e' || str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='a'){
            count+=1;
        }
    }
      printf("%d",count);
    return 0;
}