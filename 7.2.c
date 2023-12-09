// Program 7.2
//
// Showing matrix multiplication

#include <stdio.h>

int main()
{
    int a[2][3] = {{1, 2, 3},
                   {4, 5, 6}};
    int b[3][2] = {{7, 8},
                   {9, 10},
                   {11, 12}};
    int product[2][2];

 
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            product[i][j] = 0;
        }
    }

    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return 0;
}