#include <stdio.h>
#include <stdlib.h>

void matrix_mul(int row1, int col1, int (*m1)[col1], int row2, int col2, int (*m2)[col2], int row3, int col3, int (*result)[col3])
{
  /* MATRIX MULTIPLICATION */
  for(int i = 0; i < row3; i++)
    {
      for(int j = 0; j < col3; j++)
        {
          for(int k = 0; k < col3; k++)
            {
              result[i][j] = (m1[i][k] * m2[k][j]) + result[i][j];
            }
        }
    }
}

int main()
{
    int row1, row2, col1, col2;

    printf("Enter rows for matrix 1:\n");
    scanf("%d", &row1);

    printf("Enter columns for matrix 1:\n");
    scanf("%d", &col1);

  /* MEMORY ALLOCATION FOR MATRIX1 */
  int (*m1)[col1];
  m1 = malloc(row1 * sizeof(int[col1]));

    printf("Enter elements in matrix1:\n");

  /* STORE ELEMENTS IN MATRIX1 */  
  for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < col1; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }

  printf("Enter rows for matrix 2:\n");
  scanf("%d", &row2);

  printf("Enter columns for matrix 2:\n");
  scanf("%d", &col2);

  if(col1 != col2 || row1 != row2)
  {
    printf("Invalid Input\n");
    return 0;
  }

  /* MEMORY ALLOCATION MATRIX2 */
  int (*m2)[col2];
  m2 = malloc(row2 * sizeof(int[col2]));

  /* STORE ELEMENTS IN MATRIX2 */
  printf("Enter elements:\n");
  for(int i = 0; i < row2; i++)
    {
      for(int j = 0; j < col2; j++)
        {
          scanf("%d", &m2[i][j]);
        }
    }
  
  /* RESULT ARRAY DECLARATION */
  int row3 = row1, col3 = col2;
  int (*result)[col3];
  result = calloc(row3, sizeof(int[col3]));

  // MATRIX MULTIPLICATION FUNCTION CALL
  matrix_mul(row1, col1, m1, row2, col2, m2, row3, col3, result);
  
  /* DISPLAY MATRIX */

  printf("MATRIX 1:\n");
    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < col1; j++)
        {
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }

  printf("\nMATRIX 2:\n");
  for(int i = 0; i < row2; i++)
    {
        for(int j = 0; j < col2; j++)
        {
            printf("%d ", m2[i][j]);
        }
        printf("\n");
    }

  printf("\nRESULT:\n");
  for(int i = 0; i < row3; i++)
    {
        for(int j = 0; j < col3; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    /* FREE MEMORY */
    free(m1);
    
}
