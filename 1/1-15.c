#include <stdio.h>

float con(float fahr);

/* Write temp conversion program as a function */

/* Test the function */
main()
{
	tab(0, 300, 20);
}

/* Print temperature table */
int tab(int low, int high, int step)
{
	float f, c;

	f = low;
	while (f <= high) {
		c = con(f);
		printf("%3.0f %6.1f\n", f, c);
		f = f + step;
	}
	return 0;
}

/* Converter */
float con(float fahr)
{
	float cels;

	cels = (5.0/9.0) * (fahr-32.0);
	return cels;
}
