/**
 * main - check the code
 * @c: the parameter
 *
 * Return: Always 0.
 */
int _putchar(int c);
int print_last_digit(int x);
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
