#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen(".build/Input.inp", "r", stdin);
    freopen(".build/Output.out", "w", stdout);
    #endif
    
    int S, n, x, y;
    cin >> S >> n >> x >> y;
    int sum_of_area, work_days;
    if (S / x < n)
    {
        sum_of_area = S;
        work_days = (sum_of_area + x - 1) / x;
    }
    else
    {
        work_days = n;
        sum_of_area = n * x;
        S -= n * x;
        int sum = x + y;
        int tempDay = S / sum;
        sum_of_area += min(S % sum, x) + tempDay * x;
        if (S % sum > 0) {
            ++tempDay;
        }
        work_days += tempDay;
    }

    cout << sum_of_area << "\n" << work_days;

    return 0;
}