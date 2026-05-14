//goto statement
#include<stdio.h>
int main()
{
	int i;
	
	start:
		if(i <= 10){
			printf("%d ", i);
			i++;
			goto start;
		}
}