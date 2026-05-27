//TNRN
#include<stdio.h>
int addition()
{
	int a, b;
	printf("Enter a and b: ");
	scanf("%d%d ", &a, &b);
	
	printf("addition of a and b: %d" , a+b);
}

int main()
{
    addition();	
}
/*outout
Enter a and b: 44
55

addition of a and b: 99
*/