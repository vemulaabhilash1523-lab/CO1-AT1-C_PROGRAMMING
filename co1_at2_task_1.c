#include <stdio.h>
int main()
{
    int previousReading, currentReading, units;
    int householdNumber;
    char category;
    float ratePerUnit, fixedCharge;
    float energyCharge, totalBill;
    printf("Enter Household Number: ");
    scanf("%d", &householdNumber);
    printf("Enter Consumer Category (R/C/I): ");
    scanf(" %c", &category);
    printf("Enter Previous Meter Reading: ");
    scanf("%d", &previousReading);
    printf("Enter Current Meter Reading: ");
    scanf("%d", &currentReading);
    if (currentReading < previousReading)
    {
        printf("\nError: Current reading cannot be less than previous reading.\n");
        return 0;
    }
    units = currentReading - previousReading;
    switch(category)
    {
        case 'R':
        case 'r':
            ratePerUnit = 5.50;
            fixedCharge = 75.00;
            break;
        case 'C':
        case 'c':
            ratePerUnit = 8.00;
            fixedCharge = 150.00;
            break;
        case 'I':
        case 'i':
            ratePerUnit = 10.00;
            fixedCharge = 300.00;
            break;
        default:
            printf("\nInvalid Category!\n");
            return 0;
    }
    energyCharge = units * ratePerUnit;
    totalBill = energyCharge + fixedCharge;
    printf("\n===== ELECTRICITY BILL =====\n");
    printf("Household Number : %d\n", householdNumber);
    printf("Category         : %c\n", category);
    printf("Units Consumed   : %d\n", units);
    printf("Energy Charge    : %.2f\n", energyCharge);
    printf("Fixed Charge     : %.2f\n", fixedCharge);
    printf("Total Bill       : %.2f\n", totalBill);
    return 0;
}
