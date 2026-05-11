#include <stdio.h>
//voting eligibility

int main() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if(age >= 18)
        printf("Eligible for Voting");
    else
        printf("Not Eligible for Voting");

    
}
/*output
Enter age: 23
Eligible for Voting
*/