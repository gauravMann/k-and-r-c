#include<stdio.h>

/* print Fahrenheit-Celsius table
 for fahr = 0, 20, ..., 300 */

main()
{
    float fahr, celsius;
    float step = 20;
    float upper = 300;
    printf("Fahrenhiet    Celsius\n");
    for(fahr = 0; fahr <= upper; fahr+=step)
    {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f%17.1f\n", fahr, celsius);
    }
}
