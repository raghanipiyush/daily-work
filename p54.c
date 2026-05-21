#include <stdio.h>
int main() {
   
    int numbers[] = {2, 5, 8, 11, 14, 17, 20, 23};
    
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int sum = 0;

    printf("The odd numbers in the array are: ");
    
    for (int i = 0; i < size; i++) {
         if (numbers[i] % 2 != 0) {
            printf("%d ", numbers[i]);
            sum += numbers[i]; 
        }
    }
       printf("\nThe sum of these odd numbers is: %d\n", sum);
}
/*output
The odd numbers in the array are: 5 11 17 23
The sum of these odd numbers is: 56

*/