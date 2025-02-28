#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d ",&arr[i]);
    }
    for (int i=0;i<n;i++){
         int larg=arr[i];
           if (larg<arr[i+1]){
            printf("Sorted");
            break;
           }
           else{
            printf("Not Sorted");
            break;
           }
    }
   return 0;
}