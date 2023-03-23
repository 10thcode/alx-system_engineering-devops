/**
 * print_name - prints a name.
 * @name: a string.
 * @f: a pointer to a function.
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f) (name);
}