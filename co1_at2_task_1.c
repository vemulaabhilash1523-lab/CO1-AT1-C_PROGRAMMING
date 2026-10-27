#include <stdio.h>
#define RATE_PER_UNIT 5
int calculate_bill(int units)
{
#ifdef DEBUG
    printf("DEBUG: Units Consumed = %d\n", units);
#endif
    return units * RATE_PER_UNIT;
}
int main()
{
    int units = 100;
    int bill;
    bill = calculate_bill(units);
    printf("Units Consumed : %d\n", units);
    printf("Bill Amount    : Rs.%d\n", bill);
    return 0;
}
