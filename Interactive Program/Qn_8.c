#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // 5.19

    int i, j, side1 = 4, side2 = 5;
    printf("RECTANGLE OF ASTRISKS.\n");

    for (i = 0; i < side1; i++)
        {

        for (j = 0; j < side2; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
