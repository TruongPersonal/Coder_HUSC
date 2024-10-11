#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("Input.inp", "r", stdin);
    freopen("Output.out", "w", stdout);
    #endif

    int n;
    long long x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    unordered_map<int, int> frequency;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int complement = x - a[i];
        if (frequency[complement] > 0) {
            count++;
            frequency[complement]--; 
        } else {
            frequency[a[i]]++;
        }
    }

    cout << count;

    return 0;
}