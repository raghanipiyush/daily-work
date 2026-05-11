#include <stdio.h>
//Celsius to Fahrenheit

int main() 
{

    float c, f;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    f = (c * 9 / 5) + 32;

    printf("Temperature in Fahrenheit = %.2f", f);

    
}
/*output
Enter temperature in Celsius: 23
Temperature in Fahrenheit = 73.40
*/