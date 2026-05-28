//Recursion => function call itself
#include<stdio.h>
int fact(int n){
	printf("Value of n is: %d\n", n);
	if(n>5){
		fact(++n);
	}
}
int main()
{
	fact(1);
}
/*output
Value of n is: 1
*/