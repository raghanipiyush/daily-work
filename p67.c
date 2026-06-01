#include<stdio.h>
int main()
{
	int a = 20;
	int *p;
	
	p = &a;
	
	printf("value of a is: %d", a);
	printf("\naddress of a is: %u", &a);
	printf("\naddress of a using p is: %d", p);
	printf("\nvalue of a using p is: %d", *p);
	
}
/*output
value of a is: 20
address of a is: 6684228
address of a using p is: 6684228
value of a using p is: 20
*/