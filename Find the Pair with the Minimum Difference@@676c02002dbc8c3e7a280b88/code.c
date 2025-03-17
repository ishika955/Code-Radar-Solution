#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N-1;i++){
        int min=0;
        for(int j=0;j<N-1;j++){
            min=arr[j]-arr[j+1];
        }
        printf("%d",min);
    }
    return 0;
}