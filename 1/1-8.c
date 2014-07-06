#include <stdio.h>

main()
{
	int c, sp, t, nl;

	sp = t = nl = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n')
			nl++;
		if (c == '\t')
			t++;
		if (c == ' ')
			sp++;
	}
	printf("\nSpaces: %d Tabs: %d New Lines: %d\n", sp, t, nl);
}
