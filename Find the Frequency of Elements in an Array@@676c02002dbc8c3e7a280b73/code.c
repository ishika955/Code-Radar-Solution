#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[N]);
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<i;j++){
            if arr[i]==arr[j]{
                    count+=1;
            }
        }
    }
    return 0;
}