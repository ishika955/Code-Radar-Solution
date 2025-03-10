#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",arr[i]);
    }
    int array[n];
    for(int i=0;i<n;i++){
         for(int j=n;j<0;j++){
            printf("%d",array[j]);
         }
    }
    if(arr[n]==array[n]){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}