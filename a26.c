#include <stdio.h>

int sec_largest(int *, int);

int main()
{
    int size, ret;
    
    //Read size from the user
    printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];
    
    //Read elements into the array
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    //funtion call
    ret = sec_largest(arr, size);
    
    printf("Second largest element of the array is %d\n", ret);
}


int sec_largest(int *arr, int size)
{
    int small = 0, large = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > large)
        {
            large = arr[i];
        }
        if(arr[i] > small && arr[i] < large)
        {
            small = arr[i];
        }
    }

    return small;
}
