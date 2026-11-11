#include <stdio.h>
int main()
{ 
    int n, m;
    scanf("%d %d", &n, &m);

    if (n >= 2 && m <= 100)
    {
        int a[n][m];

        for (int i = 0; i < n; i ++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        int x;
        scanf("%d", &x);
        int is = 0;
        for (int i = 0; i < n; i ++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j]== x)
                {
                        is = 1;
                        printf("will not take number");
                        break;
                        
                }
            }

            if (is == 1)
            {
                break;
            }
            
        }

        if (is  == 0)
        {
            printf("will take number");
        }
    }
    else
    {
        return 0;
    }
    
    
}