#include <stdio.h>
int main(){
    int number_1,number_2;
    scanf("%d %d",&number_1,&number_2);
    int square = number_2 * number_2;
    if (number_1==square){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}