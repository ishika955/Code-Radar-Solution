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
        for(int j=0;j<N;j++){
        if(dupe==arr[i]){
           } printf("%d",dupe);
            break;
        else{ 
        dupe=arr[i];
        }
        printf("%d",dupe);
        break;
    }
 }
    
    return 0;
}