//continue statement
#include<stdio.h>
int main()
{
	int i;
	for(i =1; i<=15; i++){
		if(i == 7 || i == 11){
			continue;
		}
		printf("%d ", i);
	}
}