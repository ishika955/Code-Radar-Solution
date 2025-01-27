#include <stdio.h>
int main(){
int number1,number2;
scanf("%d %d",&number1,number2);
int check = number1 >0 && number2>0;
printf("True",check);
printf("False",!check);
return 0;}

