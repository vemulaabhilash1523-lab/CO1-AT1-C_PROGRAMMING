#include <stdio.h>
int main()
{
    int i;
    unsigned int ui;
    long int li;
    long long int lli;
    float f;
    double d;
    char ch;
    char str[50];
    int totalPaise;
    printf("Enter an integer: ");
    if(scanf("%d", &i) != 1)
    {
        printf("Invalid input for integer.\n");
        return 1;
    }
    printf("Enter an unsigned integer: ");
    if(scanf("%u", &ui) != 1)
    {
        printf("Invalid input for unsigned integer.\n");
        return 1;
    }
    printf("Enter a long integer: ");
    if(scanf("%ld", &li) != 1)
    {
        printf("Invalid input for long integer.\n");
        return 1;
    }
    printf("Enter a long long integer: ");
    if(scanf("%lld", &lli) != 1)
    {
        printf("Invalid input for long long integer.\n");
        return 1;
    }
    printf("Enter a float value: ");
    if(scanf("%f", &f) != 1)
    {
        printf("Invalid input for float.\n");
        return 1;
    }
    printf("Enter a double value: ");
    if(scanf("%lf", &d) != 1)
    {
        printf("Invalid input for double.\n");
        return 1;
    }
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter amount in paise: ");
    if(scanf("%d", &totalPaise) != 1)
    {
        printf("Invalid amount.\n");
        return 1;
    }
    printf("\n----- Entered Values -----\n");
    printf("Integer            : %d\n", i);
    printf("Unsigned Integer   : %u\n", ui);
    printf("Long Integer       : %ld\n", li);
    printf("Long Long Integer  : %lld\n", lli);
    printf("Float              : %f\n", f);
    printf("Double             : %lf\n", d);
    printf("Character          : %c\n", ch);
    printf("String             : %s\n", str);
    printf("Amount in Paise    : %d\n", totalPaise);

    return 0;
}
