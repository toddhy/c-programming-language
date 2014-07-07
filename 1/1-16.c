#include <stdio.h>
#define MAXLINE 1000

int get(char line[], int maxline);
void copy(char to[], char from[]);

/* print length of lines as well as text */
main()
{
	int len;	/* current line length */
	int max;	/* maximum length seen */
	char line[MAXLINE];	/* current input line */
	char longest[MAXLINE];	/* longest line saved */

	max = 0;
	while ((len = get(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
		if (max > 0) { 	/* there was a line */
			printf("\n%s", line);
			printf("%d\n", len - 1);
		}
	}
	return 0;
}

/* get: read a line into s, return length */
int get(char line[], int maxline)
{
	int c, i;

	for (i=0; i < maxline-1 && (c=getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
