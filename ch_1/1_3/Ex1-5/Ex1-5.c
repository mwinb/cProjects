#include <stdio.h>
/* print fahrenheit-celsius table using for loop
   starting at fahr = 300, 280, ..., 0 */
main()
{
    int fahr;
    printf("%s\t %s\n", "Fahrenheit", "Celsius");
    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%10d\t %7.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
