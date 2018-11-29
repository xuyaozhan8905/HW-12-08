#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,b[] = {10,20,30,40};
	int *bptr = &b;
	printf("Array subscript notation\n");
	for (i = 0; i <= 3; i++)
	{
		printf("%d\n",b[i]);
	}
	printf("\n\nPointer/offset notation where the pointer is the array name\n");
	for (i = 0; i <= 3; i++)
	{
		printf("*<b+%d> = %d\n", i, *(b+i));
	}
	printf("\n\nPointer subscript notation\n");
	for (i=0;i<=3;i++)
	{
		printf("bPtr[%d] = %d\n", i, bptr[i]);
	}
	printf("\n\nPointer/offset notation\n");
	for (i = 0; i <= 3; i++)
	{
		printf("*<bPtr + %d> = %d\n", i, *(bptr+i));
	}
	system("pause");
}