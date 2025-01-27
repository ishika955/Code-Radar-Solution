#include <stdio.h>
int main(){
    int cost,selling;
    scanf("%d %d",&cost,&selling);
    if(cost>selling){
        printf("Loss");
    }
    else if(cost<selling){
        printf("Profit");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}