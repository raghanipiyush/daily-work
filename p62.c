//TSRS
#include<stdio.h>
int Product(int a, int b)
{
	int total = a * b;
	return total;
}

int main()
{
	int a = 5, b = 4;
	printf("Hello\n\n");
	int ans = Product(a, b);
	printf("\nProduct of a and b is: %d", ans);
	printf("\n\nWorld");
}
/*output
Hello


Product of a and b is: 20

World
*/