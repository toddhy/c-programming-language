/* Stop multiple spaces from outputting */
#include <stdio.h>

main()
{
	int c, lc;

	while ((c = getchar()) != EOF) {
		if (c != ' ')
			putchar(c);
		if (c == ' ' && lc != ' ')
			putchar(c);
		lc = c;
	}
}
