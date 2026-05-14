#include <stdio.h>
//largest of three numbers

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c)
        printf("A is Largest");
    else if(b > a && b > c)
        printf("B is Largest");
    else
        printf("C is Largest");

    
}
/*output
Enter three numbers: 55
44
33
A is Largest
*/