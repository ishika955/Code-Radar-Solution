#include<stdio.h>
int main(){
    int N,arr[N];
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d ",arr[i]);
    }
    for (int i=0;i<N;i++){
         if arr[0]>arr[i]{
            arr[0]=arr[i];
         }
         printf("%d",arr[i]);
    }
    for (int i=0;i<N;i++){
        if arr[0]<arr[i]{
            arr[0]=arr[i];
        }
        printf("%d",arr[i]);
    }
    return 0;
}