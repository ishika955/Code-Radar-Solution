#include <stdio.h>

int main() {
    char string_1[50];
    char string_2[50];
    scanf(" %s",&string_1);
    scanf("%s",&string_2);
    char string=string_1+" and "+string_2;
    printf("You entered: %s\n",string);
    return 0;
}