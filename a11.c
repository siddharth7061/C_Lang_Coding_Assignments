#include<stdio.h>
int main()
{
      int num, flag = 0, n, m;

      printf("Enter number: \n");
      scanf("%d", &num);

      printf("Enter n:\n");
      scanf("%d", &n);

      printf("Enter m: \n");
      scanf("%d", &m);


      if((num>>n)&1)
      {
          flag = 1;
          printf("bit %d is set\n", n);
          printf("Updated value is %d\n", num^(1<<m));
      }
      else
      {
          printf("bit %d is clear\n", n);
      }




      return 0;
}

