/*
Name : Siddharth Singh
Date : 26/07/2022
Description : To remove duplicate elements in a given array
sample input : 5 5 1 2 5 9
sample output : After removing duplicates: 5 1 2 9
*/
#include <stdio.h>

void fun(int *arr1, int size, int *arr2, int *count);

int main(void)
{
    int size, count = 0;

    printf("Enter size: \n");
    scanf("%d", &size);

    int arr1[size], arr2[size];

    printf("Enter elements:\n");

    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr1[i]);
        arr2[i] = '\0';
    }

    fun(arr1, size, arr2, &count);
    
    printf("After removing duplicates:\n");
    
    for(int i = 0; i < count; i++)
    {
        printf("%d ", arr2[i]);
    }
    
    printf("\n");
}


void fun(int *arr1, int size, int *arr2, int *count)
{
    int flag = 0;
    

    if(size)
    {
        *count = 1;
        arr2[0] = arr1[0];
        for(int i = 0; i<size; i++)
        {
            for(int j = 0; j < *count; j++)
            {
                if(arr1[i] == arr2[j])
                {
                    flag = 1;
                    break;
                }
            }

            if(!flag)
            {
                arr2[*count] = arr1[i];
                (*count)++;
            }
                
            flag = 0;
        }

        arr2[*count] = '\0';
    }
    

    
}

/* End of Script */

