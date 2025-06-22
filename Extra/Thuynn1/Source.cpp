// #include <iostream>
// #include <sstream>
// #include <vector>
// #include <cctype>
// using namespace std;

// bool isValidName(string word)
// {
//     for (char c : word)
//     {
//         if (!isalpha(c))
//         {
//             return false;
//         }
//     }
//     return true;
// }

// bool isCapitalized(string word)
// {
//     return !word.empty() && isupper(word[0]);
// }

// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen(".build/Input.inp", "r", stdin);
//     freopen(".build/Output.out", "w", stdout);
// #endif

//     string line, input;
//     while (getline(cin, line))
//     {
//         if (line.empty())
//         {
//             break;
//         }
//         for (char &c : line)
//         {
//             if (!isalpha(c) && !isspace(c))
//             {
//                 c = ' ';
//             }
//         }
//         input += line + " ";
//     }
//     input[0] = tolower(input[0]); 
//     stringstream ss(input);
//     string word;
//     vector<string> names;
//     string currentName = "";

//     while (ss >> word)
//     {
//         if (isCapitalized(word) && isValidName(word))
//         {
//             if (!currentName.empty())
//             {
//                 currentName += " ";
//             }
//             currentName += word;
//         }
//         else
//         {
//             if (!currentName.empty())
//             {
//                 names.push_back(currentName);
//                 currentName.clear();
//             }
//         }
//     }
//     if (!currentName.empty())
//     {
//         names.push_back(currentName);
//     }

//     for (string name : names)
//     {
//         cout << name << "\n";
//     }

//     return 0;
// }