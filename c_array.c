
#include <stdio.h>
int main()
{
  int test[2][3][2] = {
      {
        {123, 123},
        {33, 23},
        {99, 88}
      },
      {
       {56, 76},
       {54, 62},
       {11, 31}
      }
  };

  printf("Enter 12 values: \n");

  // for (int i = 0; i < 2; ++i)
  // {
  //   for (int j = 0; j < 3; ++j)
  //   {
  //     for (int k = 0; k < 2; ++k)
  //     {
  //       scanf("%d", &test[i][j][k]);
  //     }
  //   }
  // }

  // Printing values with the proper index.

  printf("\nDisplaying values:\n");
  for (int i = 0; i < 2; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      for (int k = 0; k < 2; ++k)
      {
        printf("test[%d][%d][%d] = %d\n", i, j, k, test[i][j][k]);
      }
    }
  }

  return 0;
}