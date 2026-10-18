#include <stdio.h>
// print Celsius-Fahrenheit table
int main()
{
    printf("Celsius to Fahrenheit!\n");
    for(float celsius = 300; celsius >= 0; celsius -= 20){
        printf("%3.0f %10.1f\n", celsius, celsius * (9.0/5.0) + 32.0);
    }
}