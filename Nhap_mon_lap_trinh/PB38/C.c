#include <stdio.h>
#include <math.h>

int isPrime(int number)
{
    for (int i = 2; i <= sqrt(number); ++i)
    {
        if (!(number % i))
        {
            return 0;
        }
    }
    return number > 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    if (isPrime(n))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}