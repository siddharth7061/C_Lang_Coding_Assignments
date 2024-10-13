/*
Name : Siddharth Singh
Date : 01/07/2022
Description : Print positive Fibonacci terms
sample input : 10
sample output : 0, 1, 1, 2, 3, 5, 8
*/

#include <stdio.h>

int main()
{
    int first = 0, second = 1, next = 0, num;  /* Variable decalaration */

    printf("Enter a number: ");                /* print statementto ask user for input */
    scanf("%d", &num);                         /* Storing user's input in variable num */

    if (num > 0)                               /* if condition to check if number is positive */
    {
        while (next <= num)                    /* while loop to check if variable next is less than or equal to variable num */
        {
            printf("%d", next);                /* print statement for each fibonacci term */
            first = second;                    /* assigning variable second's value to variable first */
            second = next;                     /* assigning variable next's value to variable secnd */
            next = first + second;             /* adding first and second term and storing it in varibel next */
            if (next <= num)                   /* if condition to check variable num is less than or equal to variable num */
            {
                printf(", ");                  /* print statement to print comma and space after every fibonacci term */
            }
        }
        printf("\n");                          /* print statement to print new line after execution */
    }

    else if (num == 0)                         /* if condition to check if num is 0 */
    {
        printf("0\n");                         /* print statement to ptint 0 */
    }
    

    else                                       /* Else statement for Negative numbers */
    {
        printf("Invalid input");               /* print statement for negative numbers */
    }
}

/* end of script */