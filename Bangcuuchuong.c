#include <stdio.h>

int main() {
    int i, j;

    printf("Bang cuu chuong:\n\n");
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 9; j++) {
            printf("%2d x %2d = %2d\t", j, i, j * i);
        }
        printf("\n");
    }

    return 0;
}
