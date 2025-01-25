#include <stdio.h>

int main() {
    int int_1;
    int int_2;
    int int_3;
    scanf("%d",&int_1);
    scanf("%d",&int_2);
    scanf("%d",&int_3);
    float average = (int_1 + int_2 + int_3)/3;
    printf("Average: %.2f\n",average);
    return 0;
}