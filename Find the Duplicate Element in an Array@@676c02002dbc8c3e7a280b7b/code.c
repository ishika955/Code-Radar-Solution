#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
    scanf("%d",&arr[i]);
    }
    int dupe=arr[0];
    int count=0;
    for(int i=0;i<N;i++){
        if(dupe==arr[i]){
            count+=1;
            dupe=arr[i];
        }
    }
    printf("%d",arr[i]);
    
    return 0;
}