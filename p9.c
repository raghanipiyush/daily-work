#include <stdio.h>
//even or odd

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("Even Number");
    else
        printf("Odd Number");

    
}
/*output
Enter a number: 22
Even Number
*/