#include <iostream>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << "Tam giac deu";
    }
    else if (a == b || b == c || c == a) {
        cout << "Tam giac can";
    }
    else {
        cout << "Tam giac thuong";
    }
    
    return 0;
}