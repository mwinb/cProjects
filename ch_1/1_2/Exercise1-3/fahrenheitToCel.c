#include <stdio.h>
/* print fahrenheit-Celsius table
	for fahr = 0, 20, ....,  300 */
main()
{
     float fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	
    printf("%s\t %s\n", "Fahrenheit", "Celsius");
	fahr = lower;
	while (fahr <= upper) {
            celsius = 5.0 * (fahr - 32.0) / 9.0;
            printf("%10.0f\t %7.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
