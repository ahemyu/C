#include <stdio.h>
// Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
// easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. 
 
int main(){
    int c, state;
    state = 0;
     
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if(state == 1){
                printf("\n");
            }
            state = 0;
        } 
        else 
        {
            state = 1;
            printf("-");   
        }
    }
    // print new line after last word of input
    if (state == 1){
        printf("\n");
    }
    
}