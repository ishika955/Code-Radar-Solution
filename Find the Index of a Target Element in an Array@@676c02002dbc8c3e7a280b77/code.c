#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        if(arr[i]==target){
            printf("%d\n",i);
            break;
        }
        if(arr[i]!=target){
            printf("%d\n",-1);
            break;
        }
    }
    return 0;
}