#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;
	int *aptr=&a;
	printf("The address if a is %p\nThe value of aPtr is %p\n\n",&a,aptr);
	printf("The value of a is %d\nThe value of *aPtr is %d \n\n",a,*aptr);
	printf("Showing that * and & are complements of each other\n");
	printf("&*aptr = %p\n*&aPtr = %p\n",&*aptr,*&aptr);
	system("pause");
}