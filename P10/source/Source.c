#include<stdio.h>
#include<stdlib.h>
int qwer(int *aptr);
int main()
{
	int a=5;
	printf("The original value of number is %d\n",a);
	a = qwer(&a);
	printf("The new value of number is %d\n", a);
	system("pause");
}
int qwer(int *aptr)
{
	return *aptr**aptr**aptr;
}