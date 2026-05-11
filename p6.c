#include<stdio.h>
//Simple Interest
 int main()
 {
 	float p ,r ,t , si;
 	
 	printf("enter principal: ");
 	scanf("%f", &p);
 	
 	printf("enter rate: ");
 	scanf("%f",&r);
 	
 	printf("enter time: ");
 	scanf("%f", &t);
 	
 	si = (p*r*t)/100;
 	
 	printf("simple interest = %.2f, si");
 	
 }