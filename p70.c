#include<stdio.h>
int main()
{
	int a = 200;
	int *p, **q, ***r;
	
	p = &a;
	q = &p;
	r = &q;
	
	printf("value of a is: %d\n",a);
	printf("value of a using p (%d) is: %d\n",p,*p);
	printf("value of a using r (%d) is: %d\n",r,***r);
	
}
/*output
value of a is: 200
value of a using p (6684228) is: 200
value of a using r (6684208) is: 200

*/