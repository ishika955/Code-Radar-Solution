#include <stdio.h>
int main() {
    int number1,number2;
    scanf("%d %d",&number1,&number2);
    if(!(number1<0) && !(number2<0)){
        printf("False\n");
    }
    else if(!(number1>0)&& !(number2>0)){
        printf("False\n");
    }
    else{
    printf("True\n");}
    return 0;
}