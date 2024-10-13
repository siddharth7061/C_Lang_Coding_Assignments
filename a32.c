#include <stdio.h>

void print_sort(int *, int);

int main()
{
    int size, iter;
    
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter %d elements\n", size);
    for (iter = 0; iter < size; iter++)
    {
        scanf("%d", &arr[iter]);
    }
    
    print_sort(arr, size);
}


void print_sort(int *arr, int size)
{
    int large, small, sec_small;

    sec_small = small = large = arr[0];

    for(int i = 0; i < size; i++)
    {
        if(arr[i] > large)
        {
            large = arr[i];
        }

        if(arr[i] < small)
        {
            small = arr[i];
        }

    }

    for(int i = 0; i<size; i++)
    {
        if(arr[i] > small && arr[i] < sec_small)
        {
            sec_small = arr[i];
        }
    }

    //printf("%d ", small);
    //small = sec_small;
    //sec_small = large;

    while(small != large)
    {
        for(int j = 0; j<size; j++)
        {
            if(arr[j] > small && arr[j] < sec_small)
            {
                small = sec_small;
                sec_small = arr[j];
            }
        }

        small = sec_small;
        sec_small = large;

        printf("%d ", small);
    }

    printf("\nLarge: %d\nSmall: %d\nSecond small: %d\n", large, small, sec_small);

}
