#include<stdio.h>

int addition(int *x, int *y){
	int t;
	t = *x + *y;
	return t;
	
}

int main()
{
	int a = 10, b = 20;
//	int ans = addition(a, b); call by value
    int ans = addition(&a, &b); //call by reference
    
    printf("ans: %d", ans);
}
/*output
ans: 30


*/