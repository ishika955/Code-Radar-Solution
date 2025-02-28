#include<stdio.h>
int isPrime(int num){
    int c=0;
    for (int i=1;i<=num;i++){
        c=0;
        for(int j=1;j<=i;j++){
            if(j%i==0){
                c++;
            }
            if(c==2){
                printf("1");
            }
        }
        else{
            printf("0");
            }
    }
}