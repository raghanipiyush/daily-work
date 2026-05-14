// find out maximum of given three numbers

#include<stdio.h>
int main()
{
	int a = 101, b = 22, c = 515;
	
	a > b ?
	    ( a > c ? printf("a is max"): printf("c is max"))
	:
		( b > c ? printf("b is max"): printf("c is max"));
}
/*output
c is max
*/