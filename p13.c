#include <stdio.h>
//student grade program

int main() {
    float per;

    printf("Enter Percentage: ");
    scanf("%f", &per);

    if(per > 70)
        printf("Distinction");
    else if(per >= 60)
        printf("First Class");
    else if(per >= 50)
        printf("Second Class");
    else if(per >= 35)
        printf("Pass Class");
    else
        printf("Fail");

    
}
/*output
Enter Percentage: 40
Pass Class
*/