#include <stdio.h>

/*main -  Prints alphabets in lowercases
*
*Return: Always (Success)
*
*/
int main (void)
{
		char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
