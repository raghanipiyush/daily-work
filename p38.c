#include<stdio.h>
int main()
{
	int n = 10, i, sum = 0;
	printf("even numbers :");
	for(i = 1; i <= n; i++){
		if(i % 2 == 0){
			printf("%d ", i);
			sum = sum + i;
		}
	}
	printf("\nsum = %d ", sum);
	
}
/*output
even numbers :2 4 6 8 10
sum = 30
*/