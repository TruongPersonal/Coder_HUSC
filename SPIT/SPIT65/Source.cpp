#include <iostream>
#include <string.h>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Input.inp", "r", stdin);
    freopen("Output.out", "w", stdout);
#endif

    string line;
    long long result = 0;
    while (true)
    {
        getline(cin, line);
        if (line == "end")
        {
            break;
        }
        stringstream ss(line);
        string word;
        vector<string> words;
        while (ss >> word)
        {
            words.push_back(word);
        }

        for (size_t i = 0; i < words.size(); ++i)
        {
            string number_string;
            string operator_string;
            for (size_t j = 0; j < words[i].length(); ++j)
            {
                if (isdigit(words[i][j]))
                {
                    number_string += words[i][j];
                }
                else
                {
                    operator_string += words[i][j];
                }
            }
            if (operator_string == "cong")
            {
                result += stoll(number_string);
            }
            else if (operator_string == "tru")
            {
                result -= stoll(number_string);
            }
            else if (operator_string == "nhan")
            {
                result *= stoll(number_string);
            }
            number_string = "";
            operator_string = "";
        }
        cout << result << "\n";
        result = 0;
    }

    return 0;
}
