#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphaRever;
for (alphaRever = 'z'; alphaRever >= 'a'; alphaRever--)
{
putchar(alphaRever);
}
putchar('\n');
return (0);
}
