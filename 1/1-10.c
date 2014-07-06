#include <stdio.h>
/* Replace tab with \t, backspace with \b, \ by \\ */

main()
{
	int c, a, b;

	a = '\\';
	while ((c = getchar()) != EOF) {
		if (c != '\t' && c != '\\' && c != '\b')
			putchar(c);
		if (c == '\t') {
			b = 't';
			putchar(a);
			putchar(b);
		}
		else if (c == '\b') {
			b = 'b';
			putchar(a);
			putchar(b);
		}
		else if (c == '\\') {
			b = '\\';
			putchar(a);
			putchar(b);
		}
	}
}
		
