/*
Name : Siddharth Singh
Date : 26/07/2022
Description : To remove duplicate elements in a given array
sample input : 5 5 1 2 5 9
sample output : After removing duplicates: 5 1 2 9
*/
#include <stdio.h>

void fun(int *arr1, int size, int *arr2, int *new_size);   /* Function Declaration */

int main()                                                 /* Main() Function Definition */
{
    int size = 0, iter;                                    /* Variable Declaration */

    printf("Enter the size of the array : ");              /* Print statement to ask user for input */
    scanf("%d", &size);                                    /* Storing input in variable size */
    int arr[size], arr2[size], count = 0;                  /* Array Declaration */
    printf("Enter the %d elements\n", size);               /* Print statement to ask user to enter elements */
    for (iter = 0; iter < size; iter++)                    /* For loop to store elements in array */
    {
        scanf("%d", &arr[iter]);                           /* stroing elements in array */
    }

    fun(arr, size, arr2, &count);                          /* Function Definition */
    printf("After removing duplicates:");                  /* Print statement to print the array after removing the duplicates */
    for (int i = 0; i < count; i++)                        /* For loop to print the elements after removing the duplicates */
    {
        printf(" %d ", arr2[i]);                           /* Print statement to print the array elemenst */
    }
    printf("\n");                                          /* Printing new line */
}

void fun(int *arr, int size, int *arr2, int *new_size)     /* Function Definition to remove the delicates */
{
    int array[size];                                       /* Array declaration to store elements after removinf duplicates */
    for (int i = 0; i < size; i++)                         /* For loop to fill 0 in all indexes of second array */
    {
        array[i] = arr[i];                                 /* Copying the array elements in another array */
        arr2[i] = 0;                                       /* Storing 0 in all indexes of the second array */
    }

    for (int i = 0; i < size; i++)                         /* For loop to compare elements */
    {
        for (int j = 0; j < size; j++)                     /* For loop to compare the elements of old array with that of the new one */
        {
            if (array[i] == arr2[j])                       /* if condition to check duplicates */
            {
                break;                                     /* Break statement to break the inner for loop when duplicates are detected */
            }
            if ((array[i] != arr2[*new_size]) && (j == *new_size))   /* If condition to check unique elements */
            {
                arr2[*new_size] = array[i];                          /* Storing the unique elements in the second array */
                (*new_size)++;                                       /* Incrementing the new size for every new element */
                break;                                               /* Break statement to break the inner for loop after storing a new element */
            }
        }
    }
}
/* End of Script */

