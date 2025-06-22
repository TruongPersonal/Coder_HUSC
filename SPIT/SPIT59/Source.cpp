#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

string calculateScholarshipRanking(double average_score)
{
    if (average_score >= 9)
    {
        return "Xuat sac";
    }
    else if (average_score >= 8)
    {
        return "Gioi";
    }
    else if (average_score >= 7)
    {
        return "Kha";
    }
    return "Khong co";
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen(".build/Input.inp", "r", stdin);
        freopen(".build/Output.out", "w", stdout);
    #endif

    vector<double> score(4);
    vector<int> credit(4);

    int n;
    cin >> n;
    while (n--) {
        for (int i = 0; i < 4; ++i) {
            cin >> score[i];
        }
        for (int i = 0; i < 4; ++i) {
            cin >> credit[i];
        }
        double total_score = 0;
        int total_credit = 0;
        for (int i = 0; i < 4; ++i) {
            total_score += score[i] * credit[i];
            total_credit += credit[i];
        }
        double average_score = total_score / total_credit;
        average_score = round(average_score * 100) / 100;
        cout << calculateScholarshipRanking(average_score) << "\n";
        score.clear();
        credit.clear();
    }

    return 0;
}