#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for (int i=0;i<n-1;i++){
         int count=0;
        if (arr[i]==arr[i+1]){
            count++;
        }
        printf("%d %d",arr[i],count);
    }
    return 0;
}