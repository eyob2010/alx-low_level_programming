#include "main.h"
#include "string.h"
#include "ctype.h"
/**
 *  * leet -a function that encodes a string into 1337
 *   * @a: Accepts the word to be encoded
 *    *
 *     * Return: On success it retunes the encoded character or word
 */
char *leet(char *a)
{
	char code[] = {'4', '3', '0', '7', '1'};
	int i, j, count;
	char replace[] = {'a', 'e', 'o', 't', 'l'};
	*a = tolower(*a);
	count = strlen(a);

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < count; j++)
		{
			if (replace[i] == a[j])
			{
				a[j] = code[i];
			}
		}
	}
	return (a);
}
