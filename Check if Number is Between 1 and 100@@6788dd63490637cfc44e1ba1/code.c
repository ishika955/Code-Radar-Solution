#include <stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    if (number>=1 && number<=100){printf("In Range");}
    else{printf("Out of Range");}
    return 0;
}