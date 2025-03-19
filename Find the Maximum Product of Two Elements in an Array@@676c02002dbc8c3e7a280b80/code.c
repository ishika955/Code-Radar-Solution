#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           int mul;
           mul=abs(arr[i]*arr[j]);

        }
        if(mul>max){
            max=mul;
        }
        printf("%d ",max);
    }
    return 0;
}