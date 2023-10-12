/**
 * sum_them_all- sum all input argument
 * @n : number of arguments
 * Return: Sum or Zero
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i;
	va_list args;

	va_start(args, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			sum = sum + va_arg(args, int);
		}
	}
	else
		return (0);

	va_end(args);
	return (sum);
}
