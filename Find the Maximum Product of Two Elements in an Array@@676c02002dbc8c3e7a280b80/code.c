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
        int num=abs(arr[i]);
        int sum=1;
       while(i>n){
            sum*=num;
        }
        printf("%d ",sum);
    }
    return 0;
}