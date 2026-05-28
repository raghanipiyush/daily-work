//TSRN
#include<stdio.h>
int addition(int x, int y)
{
	printf("Addition of a and b: %d" , x+y);
}

int main()
{
	printf("Hello\n\n");
	int a , b;
	printf("Enter a and b: ");
	scanf("%d%d" , &a, &b);
	addition(a, b);
	printf("\n\nWorld");
}
/*output
Hello

Enter a and b: 44
55
Addition of a and b: 99

World
*/