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
	
	fahr = lower;
	while (fahr <= upper) {
            celsius = 5.0 * (fahr - 32.0) / 9.0;
            printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
