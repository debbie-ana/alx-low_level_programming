/**
 * _pow_recursion - returns vale of x raised to power y
 * @x: base
 * @y: index
 *
 * Return: x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
