#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d ",&arr[i]);}
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(arr[j]==0){
                arr[j]==arr[n];
            }
        
     printf("%d ",arr[n]);}}
    return 0;
}