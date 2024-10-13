/* Very efficient method */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

void print(float **arr, int row, int return_col[row])
{
/* PRINT MATRIX */
  int col;

  for(int i = 0; i < row; i++)
    {
      col = return_col[i];
      for(int j = 0; j < col; j++)
        {
          printf("%f ", arr[i][j]);
        }
      printf("\n");
    }
}

void fragments(float **arr, int row, int return_col[row])
{
  int col, temp_col, next_col;
  float *temp;
  
      for (int i = 0; i < row; i++) 
      { // loop runs until the last row
        for (int j = 0; j < row - 1; j++) 
        { // loop runs until the second last row 
          col = return_col[j]; // retreiving col for current row
          next_col = return_col[j+1]; // retreiving col for next row
            if (arr[j][col - 1] > arr[j + 1][next_col - 1]) 
            {
                // Swap rows
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                // Swap number of columns
                temp_col = return_col[j];
                return_col[j] = return_col[j + 1];
                return_col[j + 1] = temp_col;
            }
        }
    }
}

int main()
{
  int row, col, sum = 0;
  printf("Enter number of rows\n");
  scanf("%d", &row);

  float *arr[row]; // FSSD pointer array (keeping row static)
  int return_col[row]; // store number of columns

  /* MEMORY ALLOCATION */ 
  for(int i = 0; i < row; i++)
    {
      printf("Enter number of columns in row[%d]: ", i);
      scanf("%d", &return_col[i]); // storing column value for each row in return_col array
      arr[i] = malloc((++return_col[i]) * sizeof(float)); // incrementing column for average
    }

  // stdin
  for(int i = 0; i < row; i++)
    {
      col = return_col[i];
      sum = 0;
      printf("Enter elements in row[%d]\n", i);
      for(int j = 0; j < col-1; j++)
        {
          scanf("%f", &arr[i][j]);
          sum = sum + arr[i][j]; // finding sum of all elements in the row
        }
      arr[i][col-1] = (float)sum/(col-1); // calculating average
    }

  printf("Before:\n");
  print(arr, row, return_col);

  fragments(arr, row, return_col);

  printf("\nAfter:\n");
  print(arr, row, return_col);

  for(int i = 0; i < row; i++)
    {
      free(arr[i]);
    }

  return 0;
}
