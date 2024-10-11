#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("Input.inp", "r", stdin);
    freopen("Output.out", "w", stdout);
    #endif

    string str;
    vector<string> STR;
    set<string> S;
    
    
    while (true) {
        getline(cin, str);
        if (str.empty())
            break;
        STR.push_back(str);
        S.insert(str);
    }

    for (vector<string>::iterator it = STR.begin(); it != STR.end(); it++) {
        for (long unsigned int i = 1; i < (*it).length(); i++) {
            string left = (*it).substr(0, i);
            string right = (*it).substr(i, (*it).length() - i);
            if (S.find(left) != S.end() && S.find(right) != S.end()) {
                cout << *it << endl;
                break;
            }
        }
    }

    return 0;
}