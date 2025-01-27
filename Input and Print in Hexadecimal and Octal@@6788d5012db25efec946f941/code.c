#include <stdio.h>
int main() {
    int number;
    scanf("%d",&number);
    printf("Hexadecimal: %c\n",Hex(number));
    printf("Octal: %d\n",Oct(number));
    return 0;
}