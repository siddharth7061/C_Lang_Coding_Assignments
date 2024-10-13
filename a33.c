#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch;
    int c = 0;
    puts("Enter characetr");

    for(; (ch = getchar())  != EOF;)
    {
        c++;
    }

    printf("Character count: %d\n", c);

    return 0;
}
