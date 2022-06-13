#includ "stdio.h"
#includ "stdlib.h"
#includ "time.h"
/**
 *  * srand - generates random valid passw
 *     *     *    *    *    *
 *      *      *     Return: retunes 0 on success
 */
int main(void)
{
	int i, n;
	time_t t;
	n = 8;

	srand((unsigned) time(&t));
	for (i = 0; i< 8; i++)
	{
		printf("%d", rand() % 100);
	}
	return (0);
}
