#include "main.h"
/**
  * handl_s - prints character
  * @str: charater for gettnt string of print
  * Return: count of sting elements
 */
int handl_s(char *str)
{
	int cntele = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	cntele += _putchar(str[i]);
	}
	return (cntele);
}
