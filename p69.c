#include<stdio.h>
int main()
{
	int a[5] = {10, 20, 30, 40, 50};
	int *p[5] , i;
	
	for(i=0; i<5; i++){
		p[i] = &a[i];
		
	}
	for(i=0; i<5; i++){
		printf("%u ==> %d\n", p[i], *p[i]);
	}
}
/*output
6684208 ==> 10
6684212 ==> 20
6684216 ==> 30
6684220 ==> 40
6684224 ==> 50

*/