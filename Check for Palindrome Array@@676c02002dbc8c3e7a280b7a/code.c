#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int array[n];
    int isPallindrome=1;
    for(int i=0;i<n;i++){
           if( arr[i]!=array[n-i-1]){
            isPallindrome=0;
            break;
           };
    }
    if(isPallindrome){
        printf("YES");
    }
    else{
        printf("NO");
    }  
    return 0;}
