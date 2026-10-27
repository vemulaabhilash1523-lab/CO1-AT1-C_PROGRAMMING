#include <stdio.h>
#include <limits.h>
int main()
{
    int bills4000 = 4000;
    int bills60000 = 60000;
    int bills800000 = 800000;
    float billAmount = 800.25f;
    float floatTotal1, floatTotal2, floatTotal3;
    long long paiseTotal1, paiseTotal2, paiseTotal3;
    int intTotal;
    long long longLongTotal;
    printf("Size of int       : %zu bytes\n", sizeof(int));
    printf("Size of long      : %zu bytes\n", sizeof(long));
    printf("Size of long long : %zu bytes\n", sizeof(long long));
    printf("Size of float     : %zu bytes\n", sizeof(float));
    printf("Size of double    : %zu bytes\n\n", sizeof(double));
    floatTotal1 = bills4000 * billAmount;
    floatTotal2 = bills60000 * billAmount;
    floatTotal3 = bills800000 * billAmount;
    paiseTotal1 = (long long)(billAmount * 100) * bills4000;
    paiseTotal2 = (long long)(billAmount * 100) * bills60000;
    paiseTotal3 = (long long)(billAmount * 100) * bills800000;
    printf("----- Float Totals -----\n");
    printf("4000 bills   : %.2f\n", floatTotal1);
    printf("60000 bills  : %.2f\n", floatTotal2);
    printf("800000 bills : %.2f\n\n", floatTotal3);
    printf("----- Paise Totals -----\n");
    printf("4000 bills   : %.2f\n", paiseTotal1 / 100.0);
    printf("60000 bills  : %.2f\n", paiseTotal2 / 100.0);
    printf("800000 bills : %.2f\n\n", paiseTotal3 / 100.0);
    intTotal = bills4000 * 800;
    printf("Integer Total (4000 bills)     : %d\n", intTotal);
    longLongTotal = (long long)bills800000 * 800;
    printf("Long Long Total (800000 bills) : %lld\n\n", longLongTotal);
    printf("INT Maximum Value      : %d\n", INT_MAX);
    printf("LONG LONG Maximum Value: %lld\n", LLONG_MAX);
    return 0;
}
