#include <iostream>
#include <string>
using namespace std;

struct StudySection {
    string id;
    string name;
    int credit;

    void print() {
        cout << id << ',' << name << ',' << credit;
    }
};

int main() {
#ifndef ONLINE_JUDGE
    freopen(".build/Input.inp", "r", stdin);
    freopen(".build/Output.out", "w", stdout);
#endif

    int N;
    cin >> N;
    cin.ignore();

    StudySection sections[100];

    for (int i = 0; i < N; ++i) {
        getline(cin, sections[i].id, ',');
        getline(cin, sections[i].name, ',');
        cin >> sections[i].credit;
        cin.ignore();
    }

    int countCredit = 0;
    int countIT = 0;

    for (int i = 0; i < N; ++i) {
        if (sections[i].credit >= 3)
            countCredit++;

        if (sections[i].id.substr(0, 3) == "TIN")
            countIT++;
    }

    cout << countCredit << "\n";
    cout << countIT << "\n";

    for (int i = 0; i < N; ++i) {
        if (sections[i].id.substr(0, 3) == "TIN") {
            sections[i].print();
            cout << "\n";
        }
    }

    return 0;
}