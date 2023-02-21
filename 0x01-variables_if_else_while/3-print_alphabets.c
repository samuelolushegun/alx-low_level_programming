#include<stdio.h>

/**
 * main - what is that betty hummmm
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	char Ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (Ch = 'A' ; Ch <= 'Z' ; Ch++)
	{
		putchar(Ch);
	}
	putchar('\n');
	return (0);
}
