#include <stdio.h>
int main() {
    int number;
    scanf("%d",&number);
    printf("Hexadecimal: %c\n",hex(number));
    printf("Octal: %d\n",oct(number));
    return 0;
}