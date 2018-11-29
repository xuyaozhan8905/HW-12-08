#include<stdio.h>
#include<stdlib.h>
void bubble(int *a);
int main()
{
	int a[9],i;
	printf("Date items in original order\n");
	for (i = 0; i <= 9; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("\nData items in ascending order\n");
	bubble(&a);
	system("pause");
	return 0;
}
void bubble(int *a)
{
	int i,j,n=9,sum;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[j] > a[j + 1])
			{
				sum = a[j];
				a[j] = a[j + 1];
				a[j + 1] = sum;
			}
		}
		n-=1;
	}
	for (j = 0; j <= 9; j++)
	{
		printf("%3d", a[j]);
	}
	printf("\n");
}