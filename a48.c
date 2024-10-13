#include <stdio.h>
#include <stdlib.h>

void magic_square(int **, int);

int main()
{
    int n;
    printf("Enter n value:\n");
    scanf("%d", &n);

    if(n > 0 && n%2) // n is positive odd
    {
        int row = 0, col = n/2, x = row, y = col;

        // Memory allocation for 2D arrays
        int **arr = calloc(n, sizeof(int *)); // rows

        // allocating memory for each column
        for(int i = 0; i < n; i++)
        {
            *(arr + i) = calloc(n, sizeof(int));
        }

        arr[row][col] = 1;


        for(int i = 2; i <= n*n; i++)
        {
            if(x == 0)
            {
                x = n - 1;
            }
            else
            {
                x--;
            }

            if(y == n-1)
            {
                y = 0;
            }
            else
            {
                y++;
            }

            // check if the top right box is empty
            if(arr[x][y] == 0)
            {
                row = x;
                col = y;
            }
            else
            {
                // cheeck bottom box is empty
                x = row;
                y = col;

                if(x < n-1)
                {
                    x++;
                }
                else
                {
                    x = 0;
                }

                row = x;
                col = y;
            }

            // insert element
            arr[row][col] = i;
        }

        // Display matrix
        for(int i = 0; i < n; i ++)
        {
            for(int j = 0; j < n; j++)
            {
                printf("%d   ", *(*(arr + i) + j));
            }
            printf("\n");
        }

        // Free memory
        for (int i = 0; i < n; i++) 
        {
            free(arr[i]);
        }

        free(arr);
    }

}
