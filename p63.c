#include<stdio.h>
int sayHello(){
	printf("good morning...\n");
}

void addition(int a, int b){
	sayHello();
	printf("Addition of a and b is : %d", a + b);
}

int main()
{
	addition(11,5);
}
/*output
good morning...
Addition of a and b is : 16
*/