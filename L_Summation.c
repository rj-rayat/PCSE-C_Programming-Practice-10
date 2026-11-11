#include <stdio.h>


long long int summation (long long int a[], int n, int i, long long int sum)
{
    if (i == n)
    {
        return sum;
    }
    
    sum += a[i];
    return summation(a, n, i+ 1, sum);
}
int main()
{
    int n;
    scanf("%d", &n);
    long long int sum = 0;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

   long long int result = summation(a, n, 0, sum);
   printf("%lld", result);
   


}