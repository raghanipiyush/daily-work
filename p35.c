#include<stdio.h>
int main()
{
	int a = 1, b = 1, c, i;
	printf("%d %d ", a, b);
	
	for(i = 1; i <= 4; i++){
		c = a + b;
		printf("%d ", c);
		a = b;
		b = c;
	}
}