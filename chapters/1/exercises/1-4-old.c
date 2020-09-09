#include<stdio.h>

/* print Celsius Fahrenheit table
 for celsius = 0, 20, ...,300 */

main()
{
    float fahr, celsius;
    float step = 20;
    float upper = 300;
    printf("Celsius    Fahrenhiet\n");
    for(celsius = 0; celsius <= upper; celsius+=step)
    {
        fahr = ( 9.0/5.0 * celsius ) + 32.0;
        printf("%3.0f%14.1f\n", celsius, fahr);
    }
}
