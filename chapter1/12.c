// Write a program that prints its input one word per line.

#include <stdio.h>

int main()
{
    int c = 0;

    while ( (c = getchar()) != EOF)
    {
        printf("%c\n", c);
    }
}