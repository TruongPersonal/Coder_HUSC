#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int b[n];
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        while (!(a[i] % 2))
        {
            a[i] /= 2;
            count++;
        }
        b[i] = count;
    }

    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (b[i] < min)
        {
            min = b[i];
        }
    }
    cout << min;

    return 0;
}