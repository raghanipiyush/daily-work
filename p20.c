//switch case

#include<stdio.h>
int main()
{
	int a = 55, b = 4, choice;
	printf("1. addition\n");
	printf("2. substraction\n");
	printf("3. multiplication\n");
	printf("4. division\n");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("addition: %d\n",a+b);
			break;
		case 2:
			printf("substraction: %d\n",a-b);
			break;
		case 3:
			printf("multiplication: %d\n",a*b);
			break;	
		case 4:
			printf("division: %d\n",a/b);
			break;
		default:
		    printf("wrong choice");
			break;		
	}
	
}
/*output
1. addition
2. substraction
3. multiplication
4. division
2
substraction: 51

*/