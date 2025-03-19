#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    for(int i=0;i<n;i++){
        int num=arr[i];
        int sum=1;
        for(j=i+1;j<n;j++){
            sum*=num;
        }
        printf("%d ",sum);
    }
    return 0;
}