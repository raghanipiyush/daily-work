#include <stdio.h>
//positive,negative or zero

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0)
        printf("Positive Number");
    else if(num < 0)
        printf("Negative Number");
    else
        printf("Zero");

    
}
/*output
Enter a number: 23
Positive Number
*/