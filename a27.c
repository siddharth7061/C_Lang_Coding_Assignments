#include <stdio.h>

int third_largest(int *, int);

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
    ret = third_largest(arr, size);
    
    printf("Third largest element of the array is %d\n", ret);
}


int third_largest(int *arr, int size)
{
    int first = 0, second = 0, third = 0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] > first)
        {
           third = second;
           second = first;
           first = arr[i];
        }
        if(arr[i] > second && arr[i] < first)
        {
            third = second;
            second = arr[i];
        }
        if(arr[i] > third && arr[i] < second)
        {
            third = arr[i];
        }
    }

    return third;

}
