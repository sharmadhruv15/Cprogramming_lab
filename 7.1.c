
#include <stdio.h>

int main()
{
    int a[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
    int b[3][3] = {{10, 11, 12},
                   {13, 14, 15},
                   {16, 17, 18}};
    int product[3][3];

    // Initializing elements of the product matrix to 0.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            product[i][j] = 0;
        }
    }

    // Multiplying matrix a and matrix b and storing the result in product.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Displaying the product matrix.
    printf("Product of the two matrices is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}