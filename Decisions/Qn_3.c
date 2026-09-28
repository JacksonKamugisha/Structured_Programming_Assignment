#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 3.17
    int mortgage, year, M_payable;
    float IR, T_amountpayable;
    printf("MORTGAGE CALCULATOR\n");
    printf("Enter mortgage amount in Dollars: $");
    scanf("%d", &mortgage);
    printf("\nEnter mortgage term (in years): ");
    scanf("%d", &year);
    printf("\nEnter Interest Rate: ");
    scanf("%f", &IR);
    float Total_IR = IR * mortgage * year;
    T_amountpayable = mortgage + Total_IR;
    M_payable = T_amountpayable/(year * 12);


    printf("\nThe Monthly Payable Interest is: $%d", M_payable);

    return 0;
}
