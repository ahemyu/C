#include <stdio.h>

int main()
{
//replace single or multiple spaces with single space
int c;
while ((c = getchar()) != EOF)
{
    if ( c != ' ')
    {
        putchar(c);
        continue;
    }else 
    {
        c = getchar();
        while(c == ' ')
        {
            c = getchar();
        }
        putchar(' ');
        putchar(c);
    }
     
}

return 0;
}