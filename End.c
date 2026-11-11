#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i =0 ; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int i = 0;
    int j = n -1;

    while (i <= j)
    {
        
        if (i < j)
        {
            printf("%d %d", a[i], a[j]);
            printf(" ");
        }
        else if (i <= j)
        {
            printf("%d", a[i]);
            
        }
        
        i++;
        j--;
    }
    
}