#include "include/word.h"

int read_char(void)
{
	int ch;

	ch = getchar();
	if (ch == '\n' || ch == '\t')
		return (' ');
	return ((ch == '\n' || ch == '\t') ? ' ' : ch);
}

int read_word(char *word, int len)
{
	int ch;
	int pos;

	pos = 0;
	while ((ch = read_char()) == ' ')
		;
	while (ch != ' ' && ch != EOF)
	{
		if (pos < len)
			word[pos++] = ch;
		ch = read_char();
	}
	word[pos] = '\0';
	return (len);
}
