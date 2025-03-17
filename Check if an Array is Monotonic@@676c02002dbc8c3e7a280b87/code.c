#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
    scanf("%d",&arr[i]);
}
int isAscending=1;
int isDescending=1;
for(int i=0;i<N-1;i++){
    if(arr[i]>arr[i+1]){
        isAscending=0;
    }
    else if(arr[i]<arr[i+1]){
        isDescending=0;
    }
}
 if(isAscending||isDescending){
        printf("YES");
    }
    else{
        printf("NO");
    }
return 0;
}