#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d\n",&arr[i]);}
    for(int i=0;i<n;i++){
        int larg=arr[i];
        if((larg<arr[i+1])&&(arr[i+1]>arr[i+2])){
             printf("%d",arr[i+1]);
             break;
        }
        if((larg<=arr[i+1])||(arr[i+1]>=arr[i+2])){
            printf("-1");
            break;
        }
    }return 0;
}