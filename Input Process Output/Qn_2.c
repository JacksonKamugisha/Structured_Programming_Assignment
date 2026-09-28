#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 2.18
    float H_rainfall, C_rainfall;
    printf("What is the highest rainfall ever recorded in Vietnam?\n");
    scanf("%f", &H_rainfall);
    printf("What is the current rainfall recorded in Vietnam?\n");
    scanf("%f", &C_rainfall);
    if (C_rainfall > H_rainfall)
    {
        printf("\nThe current rainfall levels of this year in Vietnam are the highest.\n");
        H_rainfall = C_rainfall;
    }


    return 0;
}
