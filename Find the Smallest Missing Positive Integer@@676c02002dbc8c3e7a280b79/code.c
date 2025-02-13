#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[N]);
    }
    for(int i=0;i<N;i++){
       even=arr[i]%2==0;
       if(even == arr[i]){
             if(arr[i]>arr[i-1]){
                     printf("%d",arr[i-1]);
             }
       }
    }
    return 0;
}