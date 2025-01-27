#include <stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    if (number!=2){
        if (number%2!=0 && number!=1){printf("Prime");}
    }
    else if (number==2){printf("Prime");}
    else {printf("Not Prime");}
    return 0;
}