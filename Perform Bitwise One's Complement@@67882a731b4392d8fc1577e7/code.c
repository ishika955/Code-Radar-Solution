#include <stdio.h>
int main() {
    int number;
    scanf("%d",&number);
    int result= ~number;
    printf("%d",result);
    return 0;
}