#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

struct SellMilkTea
{
public:
    string drink_id;
    string drink_name;
    int quantity;
    int unit_price;

    void display()
    {
        cout << drink_id << ", " << drink_name << ", " << quantity << ", " << unit_price;
    }
};

void selectionSortDESC(SellMilkTea milk_tea[200], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        int min_value_index = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (milk_tea[min_value_index].quantity < milk_tea[j].quantity)
            {
                min_value_index = j;
            }
        }
        if (min_value_index != i)
        {
            SellMilkTea temp = milk_tea[i];
            milk_tea[i] = milk_tea[min_value_index];
            milk_tea[min_value_index] = temp;
        }
    }
}

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

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Input.inp", "r", stdin);
    freopen("Output.out", "w", stdout);
#endif

    int n;
    cin >> n;
    cin.ignore();
    SellMilkTea milk_tea[200];
    string line;
    vector<string> field;
    for (int i = 0; i < n; ++i)
    {
        getline(cin, line);
        field = split(line, ", ");
        milk_tea[i].drink_id = field[0];
        milk_tea[i].drink_name = field[1];
        milk_tea[i].quantity = stoi(field[2]);
        milk_tea[i].unit_price = stoi(field[3]);
        field.clear();
    }

    string command;
    while (true)
    {
        cin >> command;
        cin.ignore();
        string drink_id;
        long long revenue = 0;
        bool is_found = false;
        bool is_exist = false;
        if (command == "display")
        {
            selectionSortDESC(milk_tea, n);
            for (int i = 0; i < n; ++i)
            {
                milk_tea[i].display();
                cout << "\n";
            }
        }
        else if (command == "pay")
        {
            cin >> drink_id;
            for (int i = 0; i < n; ++i)
            {
                if (milk_tea[i].drink_id == drink_id)
                {
                    is_found = true;
                    revenue += milk_tea[i].quantity * milk_tea[i].unit_price;
                }
            }
            if (is_found)
            {
                cout << revenue << "\n";
            }
            else
            {
                cout << "Not found\n";
            }
        }
        else if (command == "insert")
        {
            getline(cin, line);
            field = split(line, ", ");

            for (int i = 0; i < n; ++i)
            {
                if (milk_tea[i].drink_id == field[0])
                {
                    is_exist = true;
                    break;
                }
            }
            if (is_exist == false)
            {
                milk_tea[n].drink_id = field[0];
                milk_tea[n].drink_name = field[1];
                milk_tea[n].quantity = stoi(field[2]);
                milk_tea[n].unit_price = stoi(field[3]);
                ++n;
            }
            field.clear();
        }
        else if (command == "finish")
        {
            break;
        }
    }

    return 0;
}