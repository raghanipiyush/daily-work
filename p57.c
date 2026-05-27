#include<stdio.h>
int main()
{
	int maths, science, english;
	int total;
	float percentage;
	
	printf("enter maths marks: ");
	scanf("%d ", &maths);
	
	printf("enter science marks: ");
	scanf("%d ", &science);
	
	printf("enter english marks: ");
	scanf("%d ", &english);
	
	total = maths + science + english;
    percentage = total / 3.0;
	
	printf("\n-----student marks-----\n");
	printf("maths    : %d\n", maths);
	printf("science  : %d\n", science);
	printf("english  : %d\n", english);
	
	printf("total marks = %d\n", total);
	printf("Percentage = %.2f%%\n", percentage);
	
	if(maths < 33 || science < 33 || english < 33){
		printf("Result = FAIL\n");
	}	else{
			printf("result = PASS\n");
			if(percentage >= 90)
			printf("grade = A+\n");
		else if(percentage >= 75)
			printf("grade = A\n");	
		else if(percentage >= 60)
			printf("grade = B\n");	
		else if(percentage >= 50)
			printf("grade = C\n");
	    else
	        printf("grade = D\n");
		}	
		
	}
	
