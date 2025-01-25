#include <stdio.h>
int main(){
    int number_1,number_2;
    scanf("%d %d",&number_1,&number_2);
    if (number_1==number_2){
        printf("Equal");
    }
    else if(number_1>number_2){
        printf("First");
    }
    else{
        printf("Second");
    }
    return 0;
}