#include<stdio.h>
int main()
{
    int n,m, temp;
    float median1, median2;
    printf("Enter n for array1: \n");
    scanf("%d", &n);
    printf("Enter m for array2: \n");
    scanf("%d", &m);

    int arr1[n], arr2[m];
    printf("Enter elements for array1: \n");
    for(int i= 0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements for array2: \n");
    for(int i= 0; i<m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    printf("\n");


    // sorting array1
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr1[i] < arr1[j])
            {
                temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }

    // sorting array2
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr2[i] < arr2[j])
            {
                temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        }
    }


    // Printing Arrays
    for(int i= 0; i<n; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\n");

    for(int i= 0; i<m; i++)
    {
        printf("%d ", arr2[i]);
    }

    printf("\n");

    // Calculating Median
    if(n%2)
    {
        median1 = arr1[(n/2)];
        printf("Median of array1 is %.0f\n", median1);
    }
    else
    {
        median1 = (arr1[(n/2)-1] + arr1[n/2])/2;
        printf("Median of array1 is %.1f\n", median1);
    }


    if(m%2)
    {   
        median2 = arr2[(m/2)];
        printf("Median of array2 is %.0f\n", median2);
    }   
    else
    {   
        median2 = (float)(arr2[(m/2)-1] + arr2[m/2])/2;
        printf("Median of array2 is %.1f\n", median2);
    }

    printf("Median of both arrays : %.2f", (median1 + median2)/2);

    printf("\n");



      return 0;
}

