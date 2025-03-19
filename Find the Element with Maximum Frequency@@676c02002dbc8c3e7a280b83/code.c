#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int counted[n];
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        counted[i]=0;
    }
    int max=0,maxNum;
    for(int i=0;i<n,i++){
        if(counted[i])continue;
        int count=0;
        for(int j=i+1;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
                counted[j]=1;
            }
        }
        if(count>max){
            max=count;
            maxNum=arr[i];
        }
    }
    printf("%d",maxNum);
    return 0;
}