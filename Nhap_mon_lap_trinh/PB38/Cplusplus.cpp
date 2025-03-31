#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int number)
{
    for (int i = 2; i <= sqrt(number); ++i)
    {
        if (!(number % i))
        {
            return false;
        }
    }
    return number > 1;
}

int main()
{
    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}