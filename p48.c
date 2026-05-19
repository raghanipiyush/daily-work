#include<stdio.h>
int main()
{
	int i, j, sp;
	for(i = 1 ; i <= 5; i++){
		if(i == 1 || i == 3){
			printf("* * * * *");
		}else{
			printf("*       *");
		}
		printf("\n");
	}
}