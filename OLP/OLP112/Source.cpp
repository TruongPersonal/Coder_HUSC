#include <iostream>
using namespace std;

long long Fibonacci[30];
long long mutilplyFibonacci[900];

void initFibonacci()
{
    Fibonacci[0] = 0;
    Fibonacci[1] = 1;
    for (int i = 2; i < 30; i++)
    {
        Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2];
    }
}

void initMutilplyFibonacci()
{
    int count = 0;
    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            mutilplyFibonacci[count] = Fibonacci[i] * Fibonacci[j];
            count++;
        }
    }
}

bool check(int number) {
    for (int i = 0; i < 900; i++) {
        if (number == mutilplyFibonacci[i]) {
            return true;
        }
    }
    return false;
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen(".build/Input.inp", "r", stdin);
    //     freopen(".build/Output.out", "w", stdout);
    // #endif

    initFibonacci();
    initMutilplyFibonacci();
    
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        if (check(n) == true) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }

    return 0;
}