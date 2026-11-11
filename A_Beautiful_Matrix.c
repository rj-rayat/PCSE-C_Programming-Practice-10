#include <stdio.h>

int main()
{
    int n = 5;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int r = 0;
    int c = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // printf("%d ", a[i][j]);
            if (a[i][j] == 1)
            {
                r = i+1;
                c = j+1;
            }
        }
        // printf("\n");
    }

    // printf("Row: %d\n", r);
    // printf("Column: %d\n", c);

    int row = abs(3 - r);
    int col = abs(3 - c);

    

    int result = row + col;
    int absolute = abs(result);
    printf("%d\n", absolute);

}