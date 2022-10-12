#include<stdio.h>
/**
 * main - addition of two numbers
 *
 * Return : Always 0 (success)
 */
int main(void)
{
	int n1, n2, sum;
	
	printf("Enter two numbers : ");
	scanf("%d %d", &n1, &n2);
	sum = n1 + n2;
		printf("\nAddition = %d", sum);
	return (0);
}
