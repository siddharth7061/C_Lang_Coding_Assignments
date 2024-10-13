#include <stdio.h>
#include <stdlib.h>

float variance(int **, int);
int mean = 0;

int main()
{
    int size;
    printf("Enter size\n");
    scanf("%d", &size);

    if(size > 0)
    {
        int **ptr;

        // first assigning how many rows are required by creating memory for row addresses
        ptr = malloc(3 * (sizeof(int*))); // *int because we will be storing address of rows

        // assigninig memory for columns in each row
        for(int i = 0; i<size; i++)
        {
            ptr[i] = malloc(size * sizeof(int));
            // assining columns memory for rows from 0 to 2
        }

        
        // storing elements
        printf("Emter elements\n");
        for(int i = 0; i < size; i++)
        {
            scanf("%d", (ptr[0] + i));
            mean = mean + *(ptr[0] + i);
        }

        // calling variance funcrion and printing value
        printf("variance: %g\n", variance(ptr, size));


    }
    else
    {
        printf("Invalid Input \n");
    }

    return 0;
}

float variance(int **ptr, int size)
{
    float result = 0;
    mean = mean/size;
    printf("Mean: %d\n", mean);

    for(int i = 0; i < size; i++)
    {
        // calculate deviation
        *(ptr[1] + i) = *(ptr[0] + i) - mean;

        // calculating d_sqr
        *(ptr[2] + i) = *(ptr[1] + i) * *(ptr[1] + i);
        result = result + *(ptr[2] + i);
    }

    return (result/size);

    printf("\n");
}



