#include <stdio.h>
int main()
{
    long long peakWh = 0;
    long long offPeakWh = 0;
    long long readingWh;
    int hour;
    float tariff;
    float peakFactor;
    float bill;
    FILE *fp;
    fp = fopen("tariff.txt", "r");
    if (fp == NULL)
    {
        printf("Unable to open tariff file.\n");
        return 1;
    }
    fscanf(fp, "%f", &tariff);
    fscanf(fp, "%f", &peakFactor);
    fclose(fp);
    printf("Enter consumption in watt-hours: ");
    scanf("%lld", &readingWh);
    printf("Enter hour of reading (0-23): ");
    scanf("%d", &hour);
    if (hour >= 18 && hour < 22)
    {
        peakWh = readingWh;
    }
    else
    {
        offPeakWh = readingWh;
    }
    bill = (offPeakWh / 1000.0f) * tariff +
           (peakWh / 1000.0f) * tariff * peakFactor;
    printf("\nTariff Rate           : Rs %.2f per kWh\n", tariff);
    printf("Peak Hour Multiplier  : %.2f\n", peakFactor);
    printf("Peak Consumption      : %lld Wh\n", peakWh);
    printf("Off-Peak Consumption  : %lld Wh\n", offPeakWh);
    printf("Total Bill            : Rs %.2f\n", bill);
    return 0;
}
