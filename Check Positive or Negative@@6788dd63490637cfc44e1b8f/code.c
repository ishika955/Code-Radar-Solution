#include <stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    if(number>0){
        printf("Positive");
    }
    else if(number==0){
        printf("Zero");
    }
    else{
        printf("Negative");
    }
}