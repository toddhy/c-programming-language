<<<<<<< HEAD
/* Work in progress still */

=======
>>>>>>> ff985fcde7e595379f264a15dfee7fdf07321c19
#include <stdio.h>
#define MAXLINE 1000

void get(char line[], int max);
void remtrail(char line[]);

/* Remove trailing blanks and tabs, and delete totally blank lines */
main()
{
	char line[MAXLINE];

	get(line, MAXLINE);	
	printf("%s", line);
}

/* get: read line into s */
void get(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
}

/* remtrail: remove trailing spaces */
void remtrail(char s[])
{
	int c, i, a;

	a = 0;
	while ((c = getchar)() != '\0')
		++a;
	for (i = a; i > 0; --i)
		if (s[i] == ' ' || s[i] == '\t')
		
