#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
            if(arr[i]==arr[j+1]){
               
            printf("%d ",arr[i]);}
        }
    }
    
    return 0;
}