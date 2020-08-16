#include<stdio.h>
int main()
{
	int number, sum=0;
	scanf_s("%d", &number);
	for (int i = 1; i <= number; i++)
	{
		sum += i;
		printf("%d\n", i);
	}
	printf("sum is %d\n", sum);
	return 0;
}