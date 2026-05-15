#include<stdio.h>
int main()
{
	int n = 5;
	int i = -n;
	while(i <= n){
		printf("%d ", i);
		i++;
	}
}
/*output
-5 -4 -3 -2 -1 0 1 2 3 4 5
*/