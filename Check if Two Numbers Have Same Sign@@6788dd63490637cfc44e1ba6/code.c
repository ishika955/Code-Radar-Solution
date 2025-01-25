#include <stdio.h>
int main(){
    int number_1,number_2;
    scanf("%d %d",&number_1,&number_2);
    if ((number_1>=0 && number>=0)||(number_1<0 && number_2<0)){
        printf("Same Sign\n");
    }
    else{
        printf("Different Sign\n");
    }
    return 0;
}