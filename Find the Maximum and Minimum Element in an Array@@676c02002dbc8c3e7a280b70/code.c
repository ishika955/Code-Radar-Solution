#include<stdio.h>
int main(){
    int N,arr[N];
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    for (int j=0;j<N;j++){
         if arr[0]>arr[j]{
            arr[0]=arr[j];
         }
         printf("%d ",arr[j]);
    }
    for (int j=0;j<N;j++){
        if arr[0]<arr[j]{
            arr[0]=arr[j];
        }
        printf("%d",arr[j]);
    }
    return 0;
}