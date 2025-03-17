#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int K;
    scanf("%d",&K);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("&d",arr[i]);
    }
    int count=0;
    for(int i=0;i<N;i++){
         if(i==K){
             count=count+1;
         }
       printf("%d",count); 
    } 
    return 0;
}