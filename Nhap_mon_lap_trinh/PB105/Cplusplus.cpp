#include <iostream>
#include <string.h>
#include <cctype>
using namespace std;

int main()
{
    while (true)
    {
        string text;
        getline(cin, text);
        if (text == "") {
            break;
        }
        int count_lower_character = 0;
        int count_upper_character = 0;
        for (size_t i = 0; i < text.size(); i++) {
            if (islower(text[i])) {
                ++count_lower_character;
            }
            if (isupper(text[i])) {
                ++count_upper_character;
            }
        }
        if (count_upper_character > count_lower_character) {
            for (size_t i = 0; i < text.size(); i++) {
                if (islower(text[i])) {
                    text[i] = toupper(text[i]);
                }
            }
        }
        else {
            for (size_t i = 0; i < text.size(); i++) {
                if (isupper(text[i])) {
                    text[i] = tolower(text[i]);
                }
            }
        }
        cout << text << "\n";
    }

    return 0;
}