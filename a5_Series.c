/*
Name : Siddharth Singh
Date : 03/07/2022
Description : Print AP, GP, HP series for the given input.
sample input : Enter the First Number 'A': 2
               Enter the Common Difference / Ratio 'R': 3
               Enter the number of terms 'N': 5
sample output : AP = 2, 5, 8, 11, 14
                GP = 2, 6, 18, 54, 162
                HP = 0.500000, 0.200000, 0.125000, 0.090909, 0.071428
*/

#include <stdio.h>

int main()
{
    int a, r, n, ap, gp, i, j, k, diff = 1;               /* Variable declaration assigning 1 value to cariable diff */
    float hp;                                             /* assigning variable hp of float data type */

    printf("Enter the First Number 'A': ");               /* print statement to ask user for input */
    scanf("%d", &a);                                      /* Storing the first number to variable a */
    printf("Enter the Common Difference / Ratio 'R': ");  /* print statement to ask user for entering ratio */
    scanf("%d", &r);                                      /* Storing ratio value to variable r */
    printf("Enter the number of terms 'N': ");            /* asking user to enter number of terms */
    scanf("%d", &n);                                      /* storing number of terms value in variable n */

    if (n >= 1)                                            /* if condition to check number of terms is greater than 1 */
    {
        for (i = 1; i <= n; i++)                          /* for loop to find AP */
        {
            ap = a + (i - 1) * r;                         /* statement to find the AP for each term */
            if (i == 1)                                   /* if condition to check the first iteration */
            {
                printf("AP = ");                          /* print statement to print "AP =" only for the first time */
            }

            printf("%d", ap);                             /* print statement to print AP */

            if (i < n)                                    /* if condition to check if i is less than n */
            {
                printf(", ");                             /* print statement to print commas after each term */
            }
        }
        printf("\n");                                     /* print statement to print new line after AP */

        for (j = 1; j <= n; j++)                          /* for loop to find GP series */
        {
            gp = a * diff;                                /* statement to find GP for each term */
            diff = diff * r;                              /* statement to find power of r for each iteration */

            if (j == 1)                                   /* if condition to check first iteration */
            {
                printf("GP = ");                          /* print statement to print "GP ="" only for the first time */
            }

            printf("%d", gp);                             /* print statemen tot print GP series */

            if (j < n)                                    /* if condition to check j is less than n */
            {
                printf(", ");                             /* print statement to print commas after each term */
            }
        }
        printf("\n");                                     /* print statement to print new line after GP series */

        for (k = 1; k <= n; k++)                          /* for loop to find HP series */
        {
            hp = 1 / ( (float) a + (k - 1) * (float) r );   /* statement to find HP series using type casting */
            if (k == 1)                                   /* if condition to check first iteration */
            {
                printf("HP = ");                          /* print statement to print "HP =" only for the first time */
            }

            printf("%f", hp);                             /* print statement to print HP searies for each term */

            if (k < n)                                    /* if condition to check k is kess than n */
            {
                printf(", ");                             /* print statement to print commas after each term */
            }
        }
        printf("\n");                                     /* print statement tp print new line after HP Series */
    }

    else                                                  /* else condition to for n less than 1 */
    {
        printf("Invalid input\n");                        /* print statement to print Invalid input */
    }
    
    return 0;
}
/* End of script */