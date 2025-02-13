#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
    scanf("%d",&arr[i]);
    }
    int dupe=arr[0];
    for(int i=0;i<N;i++){
        if(dupe==arr[i]){
            dupe=arr[i];
        }
         printf("%d",dupe);
         break;
    }
    
    return 0;
}