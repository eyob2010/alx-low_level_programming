#include"function_pointers.h"
/**
 *  * _print_name -  a function that prints a name.
 *   * @name: a parameter that accepts the name to print
 *   * @f: a pointer to the function.
 *    *
 *     * Return: On success it had nothing to returnv
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
