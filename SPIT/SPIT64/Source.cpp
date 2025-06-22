#include <iostream>
#include <string.h>
#include <vector>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

vector<string> split(string line, string delimiter)
{
    vector<string> result;
    size_t start = 0;
    size_t pos;

    while ((pos = line.find(delimiter, start)) != string::npos)
    {
        string token = line.substr(start, pos - start);
        result.push_back(token);
        start = pos + delimiter.length();
    }

    result.push_back(line.substr(start));
    return result;
}

string calculateGrade(float score)
{
    if (score >= 8.5)
    {
        return "A";
    }
    else if (score >= 7)
    {
        return "B";
    }
    else if (score >= 5.5)
    {
        return "C";
    }
    else if (score >= 4)
    {
        return "D";
    }
    return "F";
}

struct Student
{
    string student_id;
    string full_name;
    string study_section;
    float score;

    void display()
    {
        cout << student_id << " " << full_name << " " + study_section + " " << setprecision(6) << score << " " << calculateGrade(score);
    }
};

bool compare(Student a, Student b)
{
    if (a.score == b.score)
    {
        return a.student_id < b.student_id;
    }
    return a.score > b.score;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Input.inp", "r", stdin);
    freopen("Output.out", "w", stdout);
#endif

    int n;
    cin >> n;
    cin.ignore();
    Student student[1000];
    string line;
    for (int i = 0; i < n; ++i)
    {
        getline(cin, line);
        vector<string> field = split(line, ",");
        student[i].student_id = field[0];
        student[i].full_name = field[1];
        student[i].study_section = field[2];
        student[i].score = stof(field[3]);
        field.clear();
        line = "";
    }
    
    sort(student, student + n, compare);
    for (int i = 0; i < n; ++i)
    {
        student[i].display();
        cout << "\n";
    }

    return 0;
}
