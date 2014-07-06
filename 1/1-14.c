#include <stdio.h>

/* Print histogram of character types whitespace, letter, digit */
main()
{
	int i, c, ws, l, d;
	char ch;

	ws = l = d = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n')
			++ws;
		else if (c >= '0' && c <= '9')
			++d;
		else
			++l;
	}
	
	ch = '#';
	printf("Whitespace: ");
	for (i = ws; i > 0; --i)
		putchar(ch);
	printf("\nDigits: ");
		for (i = d; i > 0; --i)
		putchar(ch);
	printf("\nLetters: ");
		for (i = l; i > 0; --i)
		putchar(ch);
	printf("\n%d, %d, %d\n", ws, d, l);
}
