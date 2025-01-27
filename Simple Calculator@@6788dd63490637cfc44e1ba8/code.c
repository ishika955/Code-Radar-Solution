#include <stdio.h>
int main() {
    int number1,number2;
    char ch;
    scanf("%d %d %c",&number1,&number2,&ch);
    int sum=(number1+number2);
    int sub=(number1-number2);
    int multiply=(number1*number2);
    int div=(number1/number2);
    switch (ch){
         case '+':printf("%d",sum);break;
         case '-':printf("%d",sub);break;
         case '*':printf("%d",multiply);break;
         case '/':printf("%d",div);break;
    }
    return 0;
}