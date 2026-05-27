//TNRS
#include<stdio.h>
int Product()
{
	int a, b;
	printf("\nEnter a and b: ");
	scanf("%d%d ", &a, &b);
	int total = a * b;
	return total;
}

int main()
{
	printf("Hello\n\n");
	
	int ans = Product();
	printf("\nProduct of a and b is: %d", ans);
	printf("\n\nWorld");
}
/*output
Hello


Enter a and b: 33
3

Product of a and b is: 99

World
*/