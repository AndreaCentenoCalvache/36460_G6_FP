#include <stdio.h>
void main()
{
	int n, i, primo = 1;
	printf("Ingrese un numero entero mayor que 1: ");
	scanf("%d", &n);
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			primo = 0; //tiene un divisor, no es primo
		}
	}
	if (n > 1 && primo == 1)
	{
		printf("%d es primo\n", n);
	}
	else
	{
		printf("%d no es primo\n", n);
	}
}
