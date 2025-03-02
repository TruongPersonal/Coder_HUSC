#include <stdio.h>
#include <stdlib.h>

int C[100001];
typedef struct
{
    int first;
    int second;
} Pair;

int compare(const void *a, const void *b)
{
    return ((Pair *)a)->first - ((Pair *)b)->first;
}

void input(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
}

void compressed(int a[], int b[], int n)
{
    Pair P[n];
    for (int i = 0; i < n; ++i)
    {
        P[i].first = a[i];
        P[i].second = i;
    }
    qsort(P, n, sizeof(Pair), compare);

    int count = 0, last = P[0].first;
    for (int i = 0; i < n; ++i)
    {
        if (last != P[i].first)
        {
            ++count;
            last = P[i].first;
        }
        b[P[i].second] = count;
    }
}

void solve(int a[], int b[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        ++C[b[i]];
    }

    int max_count = 0;
    for (int i = 0; i <= 100000; ++i)
    {
        max_count = max_count > C[i] ? max_count : C[i];
    }

    for (int i = 0; i < n; ++i)
    {
        if (C[b[i]] == max_count)
        {
            printf("%d", a[i]);
            break;
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    input(a, n);

    int b[n];
    compressed(a, b, n);

    solve(a, b, n);

    return 0;
}