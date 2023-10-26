#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 *
 * @s: string to be printed
 *
 * Retun: no return
*/
void _print_rev_recursion(char *s)
{
	if (*s == 0)
		return;
	s++;
	/* المشكلة: كان بيعدي اول حرف  */
	/* الحل: اذا نقصنا جوه */
	/* الفانكشن كوول بيتم اول مرة بس */
	_print_rev_recursion(s--);
	_putchar(*s);
}
