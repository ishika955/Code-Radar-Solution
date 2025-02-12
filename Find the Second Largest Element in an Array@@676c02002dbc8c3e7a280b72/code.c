#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];  // Be cautious with VLAs, malloc() is safer in practice.
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    if (N < 2) {
        printf("-1\n");  // Edge case: if there's no second largest element
        return 0;
    }

    int max = arr[0], sec_max = -1;

    for (int i = 1; i < N; i++) {
        if (arr[i] > max) {
            sec_max = max;
            max = arr[i];
        } else if (arr[i] > sec_max && arr[i] < max) {
            sec_max = arr[i];
        }
    }

    if (sec_max == -1) {
        printf("-1\n");  // If no second largest number exists
    } else {
        printf("%d\n", sec_max);
    }

    return 0;
}