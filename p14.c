#include <stdio.h>
//leap year program

int main() {
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("Leap Year");
    else
        printf("Not a Leap Year");

    
}
/*output
Enter year: 2015
Not a Leap Year
*/