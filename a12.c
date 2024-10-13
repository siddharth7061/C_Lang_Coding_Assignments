#include<stdio.h>
int main()
{
    int num;
    printf("Enter number: \n");
    scanf("%d", &num);

    if(num > 0)
    {
        int arr[num];

        for(int i = 0; i <= num-2; i++)
        {
            arr[i] = i+2;
        }

        for(int i = 0; i <= num-2; i++)
        {
            if(((arr[i] != 2) && (!(arr[i]%2))) || ((arr[i] != 3) && (!(arr[i]%3))) || ((arr[i] != 5) && (!(arr[i]%5))) )
            {
                arr[i] = 0;
            }
            else
            {
                printf("%d ", arr[i]);
            }
        }

        printf("\n");
    }
    else
    {
        printf("Invalid Input\n");
    }

      return 0;
}

