#include<stdio.h>
# define a 1111
int main()
{
	float b;
	b = 22.12;
	b = a + b;
	printf("value of b is: %.2f a is: %d" , b,a);
}
/*output
value of b is: 1133.12 a is: 1111
*/