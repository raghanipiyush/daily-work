#include <stdio.h>
int main() {
   
    int numbers[] = {2, 5, 8, 11, 14, 17, 20, 23};
     int size = sizeof(numbers) / sizeof(numbers[0]);
    int sum = 0;

    printf("The even numbers in the array are: ");
    
    for (int i = 0; i < size; i++) {
       
        if (numbers[i] % 2 == 0) {
            printf("%d ", numbers[i]);
            sum += numbers[i]; 
    }
}
	printf("\nThe sum of these even numbers is: %d\n", sum);

}
/*output
The even numbers in the array are: 2 8 14 20
The sum of these even numbers is: 44
*/