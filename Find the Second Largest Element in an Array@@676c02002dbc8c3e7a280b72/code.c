#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
    scanf("%d ",&arr[i]);
    }
    int max=arr[0];
    int sec_max= arr[0];
    int same=-1;
    for(int j=0;j<N;j++){
        if(max<arr[j]){
            max=arr[j];
            continue;
        }
    }
    for(int j=0;j<N;j++){
        if (max==arr[j]){
            continue;
        
        if(sec_max<arr[j]){
            sec_max=arr[j];
        }
        }
        else if{
           printf("%d",same);
        }
    }
    printf("%d",sec_max);
    return 0;
}