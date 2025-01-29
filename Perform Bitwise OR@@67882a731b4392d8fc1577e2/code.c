#include <stdio.h>
int main(){
    int number1,number2;
    scanf("%d %d",&number1,&number2);
    int result = number1 ^ number2;
    printf("%d\n",result);
    return 0;
}