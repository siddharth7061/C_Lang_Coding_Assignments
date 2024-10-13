#include <stdio.h>
#include <string.h>

void reverse_recursive(char str[], int i, int size);

int main()
{
    char str[30];
    
    printf("Enter any string : ");
    scanf("%[^\n]", str);

    int size = strlen(str), i = 0;

    reverse_recursive(str, i, size);
    
    printf("Reversed string is %s\n", str);
}


void reverse_recursive(char str[], int i, int size)
{
    char temp;

    if(i < size/2)
    {
        //recursive condition
        temp = str[i];
        str[i] = str[size - 1 - i];
        str[size - 1 - i] = temp;

        reverse_recursive(str, ++i, size);
    }

}

