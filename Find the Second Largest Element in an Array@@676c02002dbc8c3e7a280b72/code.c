#include<stdio.h>
#include<limits.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
    scanf("%d",&arr[i]);}
    if(N<2){
        printf("%d",-1);
        return 0;
    }
    int max=arr[0];
    int sec_max= INT_MIN;
    for(int j=0;j<N;j++){
        if(max<arr[j]){
            max=arr[j];
            continue;}}
    for(int j=0;j<N;j++){
        if (max>arr[j] && arr[j]>sec_max){
            sec_max=arr[j];}}
        if(sec_max==INT_MIN){
            printf("-1");
        }else{
            printf("%d\n",sec_max);
        }
    printf("%d",sec_max);
    return 0;}