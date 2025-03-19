#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int array[n];
    for(int i=0;i<n;i++){
            arr[i]=array[n-i];
    }
    if(arr[i]==array[j]){
        printf("YES");
    }
    else{
        printf("NO");
    }  return 0;}
