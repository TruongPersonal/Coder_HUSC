#include <iostream>
#include <math.h>
using namespace std;
#define MAX_SIZE 10000001

int prime[MAX_SIZE];
int digitSumCheck[MAX_SIZE];

void sievePrime() {
    for (int i = 2; i < MAX_SIZE; i++) {
        prime[i] = 1;
    }
    int limit = sqrt(MAX_SIZE);
    for (int i = 2; i <= limit; i++) {
        if (prime[i]) {
            for (int j = i * i; j < MAX_SIZE; j += i) {
                prime[j] = 0;
            }
        }
    }
}

void precomputeDigitSumCheck() {
    for (int i = 1; i < MAX_SIZE; i++) {
        int sum = 0, num = i;
        while (num) {
            sum += num % 10;
            num /= 10;
        }
        digitSumCheck[i] = sum % 2;
    }
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen(".build/Input.inp", "r", stdin);
        freopen(".build/Output.out", "w", stdout);
    #endif
    
    int l, r;
    cin >> l >> r;
    
    sievePrime();
    precomputeDigitSumCheck();
    
    int count = 0;
    for (int i = l; i <= r; i++) {
        if (prime[i] && digitSumCheck[i]) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}