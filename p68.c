#include<stdio.h>
int main()
{
	int a[5] = {10, 20, 30, 40, 50};
	int *p;
	
	p = &a;
	
	printf("%u ==> %d",(p + 0), *(p + 0));
	printf("\n%u ==> %d", p+1, *(p+1));
	printf("\n%u ==> %d", p+2, *(p+2));
	printf("\n%u ==> %d", p+3, *(p+3));
    printf("\n%u ==> %d", p+4, *(p+4));
	printf("\n%u ==> %d", p+5, *(p+5));
}