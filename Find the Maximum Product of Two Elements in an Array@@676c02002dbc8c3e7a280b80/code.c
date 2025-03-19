#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    int mul;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           mul=arr[i]*arr[j];

        }
        if(mul>max){
            max=mul;
        }
       
    } printf("%d ",max);
    return 0;
}