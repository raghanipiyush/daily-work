#include<stdio.h>
int main()
{
	int i;
	for(i = 1; i <= 4; i++)
	{
		if(i % 2 == 0)
		printf("%d ", i * i);
		else
		printf("%d ", i);
	}
}
/*output
1 4 3 16
*/