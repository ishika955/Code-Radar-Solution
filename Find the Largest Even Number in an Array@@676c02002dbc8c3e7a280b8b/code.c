#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    int even=-1;
    int found=0;
    for (int i=0;i<N;i++){
        if(arr[i]%2==0){
           if(!found||even<arr[i]){
            even=arr[i];
            found=1;
           }
        }
    }
    printf("%d ",even);

    return 0;
}