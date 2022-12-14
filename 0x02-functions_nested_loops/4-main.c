/**
 * main - check the code.
 * _isalpha - check the code
 * @c: the characer to search
 * Return: 1 if c is a letter, 0 therwise
 */
int _putchar(int c);
int _isalpha(int c);
int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
