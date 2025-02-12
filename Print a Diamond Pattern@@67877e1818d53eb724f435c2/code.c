#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n/2;i++){
    for (int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            printf(" ",j);
        }
        for(int j=0;j<=i;j++){
            printf("*",j);
        }
        for(int j=0;j<i;j++){
            printf("*",j);
        }
        printf("\n");
    }}
    for(int i=n/2+1;i<n;i++){
    for (int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ",j);
        }
        for(int j=0;j<n-i;j++){
            printf("*",j);
        }
        for(int j=0;j<n-i-1;j++){
            printf("*",j);
        }
        printf("\n");
    }}
    return 0;
}