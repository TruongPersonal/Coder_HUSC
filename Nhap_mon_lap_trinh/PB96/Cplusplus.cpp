#include <iostream>
#include <algorithm>
using namespace std;

int C[100001];

void input(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
}

void compressed(int a[], int b[], int n)
{
    pair<int, int> P[n];
    for (int i = 0; i < n; ++i)
    {
        P[i].first = a[i];
        P[i].second = i;
    }
    sort(P, P + n);

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
        max_count = max(max_count, C[i]);
    }

    for (int i = 0; i < n; ++i)
    {
        if (C[b[i]] == max_count)
        {
            cout << a[i];
            break;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    input(a, n);

    int b[n];
    compressed(a, b, n);

    solve(a, b, n);

    return 0;
}