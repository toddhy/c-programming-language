#include <stdio.h>

#define MAX 10

/* Print histogram of the lenghts of words in input */
main()
{
	int i, wl, c, h;
	int lengths[MAX];
	char ch;

	for (i = 0; i < MAX; i++)	/* initialize array */
		lengths[i] = 0;

	wl = 0; 			/* put word lengths into array */
	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\t' && c != '\n')
			wl++;
		else {
			++lengths[wl];
			wl = 0;
		}
	}

	ch = '#';			/* print histogram */
	for (i = 0; i < MAX; i++) {
		printf("%d: ", i);
		for (h = lengths[i]; h > 0; --h)
			putchar(ch);
		printf("\n");
	}
}
