#include <stdio.h>

int suma();
int main()
{
	int num1,num2;
	printf("Ingrese primer valor\n");
	scanf("%i",&num2);
	
	printf("Ingrese segundo valor\n");
	scanf("%i",&num1);
	
	printf("%i\n", suma(num1, num2));
	return 0;
}

int suma(int num1, int num2)
{
	int suma = num1 + num2;
	return suma;
}






