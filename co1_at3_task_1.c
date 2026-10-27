#include <stdio.h>
#define MAX_METER 65535
float calculateBill(int units)
{
    float bill = 0;
    if(units <= 100)
    {
        bill = units * 1.5;
    }
    else if(units <= 200)
    {
        bill = 100 * 1.5 +
               (units - 100) * 2.5;
    }
    else
    {
        bill = 100 * 1.5 +
               100 * 2.5 +
               (units - 200) * 4.0;
    }
    return bill;
}
int main()
{
    int previous,current,units;
    float bill;
    printf("Enter previous reading: ");
    if(scanf("%d",&previous)!=1)
    {
        printf("Invalid input.\n");
        return 1;
    }
    printf("Enter current reading: ");
    if(scanf("%d",&current)!=1)
    {
        printf("Invalid input.\n");
        return 1;
    }
    if(previous < 0 || current < 0)
    {
        printf("Error: Negative reading is not allowed.\n");
        return 1;
    }
    if(previous > MAX_METER || current > MAX_METER)
    {
        printf("Error: Reading exceeds meter limit.\n");
        return 1;
    }
    if(current >= previous)
    {
        units = current - previous;
    }
    else
    {
        units = (MAX_METER - previous + 1) + current;
    }
    bill = calculateBill(units);
    printf("\nUnits Consumed : %d\n", units);
    printf("Bill Amount    : Rs %.2f\n", bill);
    return 0;
}
