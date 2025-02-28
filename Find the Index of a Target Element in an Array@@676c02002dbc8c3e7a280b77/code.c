#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int index= -1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        if(arr[i]==target){
            index=i;
            break;}
        }
        if(index!= -1){
            printf("%d\n",i);
        }
        else{
            printf("%d\n",-1);
        }
    return 0;}
