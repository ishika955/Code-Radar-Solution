#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
        int r;
        r=arr[j]%10;
        sum=sum + r;
        arr[n]=arr[n]/10;
        }
        printf("%d ",sum);}
    
    return 0;
}