#include <stdio.h>
int main()
{
    int units = 250;
    int a = 5, b = 2;
    float charge = 123.456f;
    int paise;
    long big = 5000000000L;
    int small;
    /* Example 1: Integer Division */
    printf("Example 1:\n");
    printf("5 / 2 = %d\n", a / b);
    /* Example 2: Correct Floating Point Division */
    printf("\nExample 2:\n");
    printf("5 / 2.0 = %.2f\n", a / 2.0);
    /* Example 3: Integer Division in Billing */
    printf("\nExample 3:\n");
    printf("units / 100 = %d\n", units / 100);
    printf("units / 100.0 = %.2f\n", units / 100.0);
    /* Example 4: Explicit Casting */
    printf("\nExample 4:\n");
    printf("(int)7.9 = %d\n", (int)7.9);
    /* Example 5: Rounding to Paise */
    paise = (int)(charge * 100 + 0.5);
    printf("\nExample 5:\n");
    printf("Charge = %.3f\n", charge);
    printf("Paise = %d\n", paise);
    printf("Amount = Rs %d.%02d\n",
           paise / 100,
           paise % 100);
    /* Example 6: Casting Large long to int */
    small = (int)big;
    printf("\nExample 6:\n");
    printf("Long value = %ld\n", big);
    printf("After casting to int = %d\n", small);
    /* Example 7: Floating Point Precision */
    printf("\nExample 7:\n");
    printf("0.1 + 0.2 = %.20f\n", 0.1 + 0.2);
    return 0;
}
