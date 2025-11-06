

/*
NAME SHANICE 
Reg no :CT101/G/26496/25
Description prompt the user to enter details
*/




#include <stdio.h>

int main() {
    float hours, wage;
    float standard_hours, overtime_hours;
    float standard_pay, overtime_pay, gross_pay;
    float taxable_at_15, taxable_at_20;
    float tax_at_15, tax_at_20, total_tax;
    float net_pay;

    // 1. Get User Input
    printf("Enter hours worked: ");
    scanf("%f", &hours);

    printf("Enter hourly wage: ");
    scanf("%f", &wage);

    // 2. Calculate Gross Pay
    standard_hours = (hours < 40) ? hours : 40;
    overtime_hours = (hours > 40) ? (hours - 40) : 0;

    standard_pay = standard_hours * wage;
    overtime_pay = overtime_hours * (wage * 1.5);
    gross_pay = standard_pay + overtime_pay;

    // 3. Calculate Tax
    taxable_at_15 = (gross_pay < 600) ? gross_pay : 600;
    tax_at_15 = taxable_at_15 * 0.15;

    taxable_at_20 = (gross_pay > 600) ? (gross_pay - 600) : 0;
    tax_at_20 = taxable_at_20 * 0.20;

    total_tax = tax_at_15 + tax_at_20;

    // 4. Calculate Net Pay
    net_pay = gross_pay - total_tax;

    // 5. Print Results
    printf("\n--- Pay Summary ---\n");
    printf("Gross Pay: $%.2f\n", gross_pay);
    printf("Tax: $%.2f\n", total_tax);
    printf("Net Pay: $%.2f\n", net_pay);

    return 0;
}