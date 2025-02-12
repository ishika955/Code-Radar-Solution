#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for (int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    int even=arr[i]%2==0;
    for (int i=0;i<N;i++){
        if(even==arr[i]){
            printf("%d ",even);
        }
    }
    return 0;
}