#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

// Hàm tách các từ trong chuỗi
vector<string> splitList(string word)
{
    vector<string> v;
    stringstream ss(word);
    string w;
    while (ss >> w)
    {
        v.push_back(w);
    }
    return v;
}

int main()
{
    string sFirst, sSecond;
    getline(cin, sFirst);
    getline(cin, sSecond);

    vector<string> words = splitList(sSecond);

    // Sử dụng map để nhóm các từ theo ký tự đầu tiên
    map<char, vector<string>> wordMap;
    for (auto &word : words)
    {
        wordMap[word[0]].push_back(word);
    }

    // Sắp xếp từng nhóm từ theo ký tự đầu tiên
    for (auto &pair : wordMap)
    {
        sort(pair.second.begin(), pair.second.end());
    }

    string result = "";
    for (char c : sFirst)
    {
        if (wordMap.find(c) != wordMap.end())
        {
            for (auto &word : wordMap[c])
            {
                result += word + " ";
            }
        }
    }

    // Xóa khoảng trắng dư thừa và in kết quả
    if (!result.empty())
        result.pop_back();
    
    cout << result << endl;

    return 0;
}