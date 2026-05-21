#include<stdio.h>
int main()
{
	int arr[] = {22, 56, 66, 11, 77,33};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	int max = arr[0];
	int min = arr[0];
	for(int i = 1; i < size; i++){
		if(arr[i] > max){
			max = arr[i];
		}
		if(arr[i] < min){
			min = arr[i];
		}
	}
	printf("maximum nmber: %d\n" ,max);
	printf("minumum nmber: %d\n" ,min);
}