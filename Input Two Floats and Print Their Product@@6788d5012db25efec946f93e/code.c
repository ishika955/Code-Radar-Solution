#include <stdio.h>
int main() {
    float number_1;
    float number_2;
    scanf("%f ",&number_1);
    scanf("%f",&number_2);
    float product=number_1*number_2;
    printf("Product: %.2f\n",product);
    return 0;
}