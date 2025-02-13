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
            printf("%d",dupe);
           }
        else{ 
        dupe=arr[i];
        break;}
    }
    
    return 0;
}