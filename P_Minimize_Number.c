#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int count = 0;
    int isDevide = 1;

    while (1)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                a[i] = a[i] / 2;
            }
            else
            {
                isDevide = 0;
                break;
            }
        }

        if (isDevide == 1)
        {
            count++;
        }
        else
        {
            break;;
        }
    }

    printf("%d", count);
    
}