#include "main.h"

/**
 * void print_triangle - check the code
 *@size : this is the sieze of the triangle 
 */
void space(int a);
void print_triangle(int size)
{
int i;
int j;
if ( size > 0 )
{	
for (i = 1; i <= size ; i++)
{
	for (j=1; j<=i;j++)
	{
		space(size-j);
		_putchar('#');
	}
_putchar('\n');
}

}
else 
_putchar('\n');
_putchar('\n');
}
void space(int a)
{
if (a > 0)
{

        for (; a >= 1; a--)
                _putchar(' ');
}
}
