#include <stdio.h>
#define LENGTH 250
// Exercise 1-14. Write a program to print a histogram of the frequencies of different characters in its input. 
int main()
{

    //52 aplhabet letters, 10 digits so lets just init an array of 150

    int arr [LENGTH] = {0}; // too many but lets go like this at first
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\t' && c != '\n')
            ++arr[c];
    }
    
    for(int i = 0; i < LENGTH; ++i)
    {
        if(arr[i] > 0)
        {
            printf("%c: ", i);
            for(int j = 0; j < arr[i]; ++j)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}