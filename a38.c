#include <stdio.h>
#include <string.h>

void reverse_iterative(char str[]);

int main()
{
    char str[30];
    
    printf("Enter any string : ");
    scanf("%[^\n]", str);
    
    reverse_iterative(str);
    
    printf("Reversed string is %s\n", str);
}


void reverse_iterative(char str[])
{
    int size = strlen(str);
    char temp;


        for(int i =0; i < (size-1)/2 ; i++)
        {
            temp = str[i];
            str[i] = str[size - 1 -i];
            str[size - 1 - i] = temp;
        }
}
