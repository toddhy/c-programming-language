#include <stdio.h>

/* Print input one word per line */
/* Problem: Deal with consecutive spaces and tabs */
main()
{
	int c, a, lc;

	a = '\n';
	while ((c = getchar()) != EOF) {
		if (lc != ' ' && lc != '\t' && c == ' ' || c == '\t') {
			putchar(a);
			lc = c;
		}
		else {
			putchar(c);
			lc = c;
		}
	}
}
