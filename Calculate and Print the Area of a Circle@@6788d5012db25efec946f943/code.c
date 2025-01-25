#include <stdio.h>
int main() {
    float radius;
    scanf(" %.2f",&radius);
    float area = 3.14 * radius * radius;
    printf("Area: %f\n",area);
    return 0;
}