#include <stdio.h>
#define RUPEES_TO_PAISE(x) ((x) * 100)
#define SQUARE(x) ((x) * (x))
#define MAX(a,b) (((a) > (b)) ? (a) : (b))
int main()
{
    int a = 5;
    int b = 8;
    printf("Rupees to Paise: %d\n", RUPEES_TO_PAISE(25));
    printf("Square of %d = %d\n", a, SQUARE(a));
    printf("Maximum of %d and %d = %d\n", a, b, MAX(a, b));
    return 0;
