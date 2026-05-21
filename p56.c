#include <stdio.h>
int main() {
   
    int numbers[] = {12, -5, 0, -18, 45, -3, -21, 8};
    
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("The negative numbers in the array are: ");
    
    for (int i = 0; i < size; i++) {
        
        if (numbers[i] < 0) {
            printf("%d ", numbers[i]);
        }
    }
    printf("\n");
}
/*output
The negative numbers in the array are: -5 -18 -3 -21
*/