#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int counted[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        counted[i]=0
    }
    int max=0;
    int mul;
    for(int i=0;i<n;i++){
        if(counted[i])continue;
        for(int j=i+1;j<n;j++){
           mul=abs(arr[i])*abs(arr[j]);
            counted[j]=1;
        }
        if(mul>max){
            max=mul;
        }
       
    } printf("%d ",max);
    return 0;
}