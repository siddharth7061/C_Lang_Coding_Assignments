/*
Name : Siddharth Singh
Date : 07/07/2022
Description : To print a Pyramid Pattern for the given number
sample input : 5
sample output : 5
                4  5
                3  4  5
                2  3  4  5
                1  2  3  4  5
                2  3  4  5  
                3  4  5  
                4  5  
                5  
*/
#include <stdio.h>
int main()
{
    int i, j, k, l, num, a, b;                    /* Variable Declaration */
    printf("Enter a number: \n");                 /* Print statement to ask the user for input */
    scanf("%d", &num);                            /* Storing the input in a variable num */
    a = num;                                      /* Assigning num value to another variable a */

    for (i = 1; i <= num; i++)                    /* For loop to print the rows of frist half og the pyramid pattern */
    {
        for (j = 1; j <= i; j++)                  /* For loop to print the columns of first half of the pyramid pattern */
        {
            printf("%d  ", a);                    /*Print statement to print the value of a for each iteration */
            a++;                                  /*Incrementing the value of a for each iteration */
        }
        a = num - i;                              /* decrementing the value of a by i for each iteration */
        printf("\n");                             /* print statemen to print new line after each row */
    }

    for (k = i - 2; k > 0; k--)                   /* For loop to print the rows of second half of the pattern */
    {
        b = num - k + 1;                          /* Assigning value num - k + 1 to variable b for printing the second half of the pattern */

        for (l = k; l > 0; l--)                   /* For loop to print the column of second half of the pattern */
        {
            printf("%d  ", b);                    /* Print statement to print the value of b */
            b++;                                  /* Incrementing the value of b for each iteration */
        }
        printf("\n");                             /* Print statement to print new line after each row */
    }

    return 0;
}
/* End of script */