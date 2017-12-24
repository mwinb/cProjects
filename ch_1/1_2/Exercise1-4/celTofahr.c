#include <stdio.h>
/* print Celsius --> fahrenheit table
     for cel = 0, 20, ...., 300 */
main()
{
     float fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	
    printf("%s\t %s\n", "Celsius", "Fahrenheit");
    celsius = lower;
    while (celsius <= upper) {
            fahr = (1.8 * celsius) + 32;
            printf("%7.0f\t %10.1f\n", celsius, fahr);
            celsius = celsius + step;
	}
}
