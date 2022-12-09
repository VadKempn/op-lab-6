#include <stdlib.h>
#include <stdio.h>

int main() {
    float arr[4] = {-3.4, 4.5, -5.6, 6.7};
    float *ptr = arr;
    printf("===================================================\n");
    for (int i = 0; i < 4; ++i) {
        printf(" || %f", *(ptr + i));
    }
    printf("\n===================================================\n");
    float *arr2 = (float *) malloc(4 * sizeof(float ));
    for (int i = 0; i < 4; ++i) {
        arr2[i] = arr[i];
    }
    for (int i = 0; i < 4; ++i) {
        printf(" || %f", arr2[i]);
    }
    printf("\n===================================================");
    return 0;
}
