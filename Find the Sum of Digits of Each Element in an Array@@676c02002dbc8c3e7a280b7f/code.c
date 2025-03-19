#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int r;
        r=arr[i]%10;
        int sum=0;
        for(int j=0;j<n;j++){
            sum=sum + r;
            arr[j]=arr[j]/10;
        }
        printf("%d ",sum);
    }
    return 0;
}