#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("Input.inp", "r", stdin);
    freopen("Output.out", "w", stdout);
    #endif
    
    int S, n, x, y;
    cin >> S >> n >> x >> y;
    int sumOfArea, workDays;
    if (S / x < n)
    {
        sumOfArea = S;
        workDays = (sumOfArea + x - 1) / x;
    }
    else
    {
        workDays = n;
        sumOfArea = n * x;
        S -= n * x;
        int sum = x + y;
        int tempDay = S / sum;
        sumOfArea += min(S % sum, x) + tempDay * x;
        if (S % sum > 0) {
            ++tempDay;
        }
        workDays += tempDay;
    }

    cout << sumOfArea << "\n" << workDays;

    return 0;
}