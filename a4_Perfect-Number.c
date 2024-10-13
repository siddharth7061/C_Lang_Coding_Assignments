/*
Name : Siddharth Singh
Date : 03/07/2022
Description : Check if entered number is perfect or not
sample input : 6
sample output : Yes, entered number is perfect number
*/

#include <stdio.h>

int main()
{
    int num, i, sum = 0;                                                /* Variabledeclaration and assigning 0 value to variable sum */

    printf("Enter a number: \n");                                       /* print statement to ask user for input */
    scanf("%d", &num);                                                  /* storing user's input in variable num */

    if (num == 0)                                                       /* if condition to check variable num is 0 */
    {
        printf("No, entered number is not a perfect number\n");         /* print statement for a number that ia not perfect */
    }

    else if (num < 0)                                                   /* if condition to check variable num is negative */
    {
        printf("Error : Invalid Input, Enter only positive number\n");  /* print statement to enter only positive number */
    }

    else                                                                /* else condition for a positive number */
    {
        for (i = 1; i < num; i++)                                       /* for loop to find factors of the entered number */
        {
            if (num % i == 0)                                           /* if condition to check if i is a factor of the entered number */
            {
                sum = sum + i;                                          /* adding all factors and storing it in a variable sum */
            }
        }

        if (sum == num)                                                 /* if condition to check the entered number is equal to the sum of all its factors */
        {
            printf("Yes, entered number is perfect number\n");          /* print statement for perfect number */
        }
        else                                                            /* else condition for a number that is not perfect */
        {
            printf("No, entered number is not a perfect number\n");     /* print statement for a number that is not perfect */
        }
    }

    return 0;
}
/* end of script */