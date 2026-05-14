#include <stdio.h>
//largest of three numbers(nested if)
int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b) {
        if(a > c)
            printf("A is Largest");
        else
            printf("C is Largest");
    }
    else {
        if(b > c)
            printf("B is Largest");
        else
            printf("C is Largest");
    }

    
}
/*output
Enter three numbers: 23
45
67
C is Largest
*/