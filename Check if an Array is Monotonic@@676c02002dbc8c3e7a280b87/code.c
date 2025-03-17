#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
    scanf("%d",&arr[i]);
}
int isAscending=0;
int isDescending=0;
int isEqual=0;
for(int i=0;i<N-1;i++){
    if(arr[i]<arr[i+1]){
        isAscending=1;
    }
    else if(arr[i]>arr[i+1]){
        isDescending=1;
    }
    else if(arr[i]==arr[i+1]){
        isEqual=1;
    }
 if(isAscending||isDescending||isEqual){
        printf("YES");
    }
    else{
        printf("NO");
    }}
return 0;
}