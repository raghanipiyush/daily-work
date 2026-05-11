#include<stdio.h>
//area of circle
 int main()
 {
 	float r,area;
 	
 	printf("enter radius: ");
 	scanf("%f", &r);
 	
 	area = 3.14 * r * r;
 	 printf("area of circle = %.2f",area);
 	 
 }
 /*output
 enter radius: 23
area of circle = 1661.06
 */