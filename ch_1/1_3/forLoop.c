#include <stdio.h>
/* print Fahrenheit-Celsius table using for loop */
main()
{
    int fahr;
    printf("%s\t %s\n", "Fahrenheit", "Celsius");
    for (fahr = 0; fahr <=300; fahr = fahr + 20)
        printf("%10d\t %7.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
