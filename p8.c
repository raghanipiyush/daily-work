#include <stdio.h>
//Swap Two Numbers

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After Swapping: a = %d, b = %d", a, b);

    
}
/*output
Enter two numbers: 22
33
After Swapping: a = 33, b = 22

*/