#include <iostream>
#include <string>
using namespace std;

bool isValidOTP(string otp) {
    for (char c : otp) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen(".build/Input.inp", "r", stdin);
    freopen(".build/Output.out", "w", stdout);
#endif
    string message;
    char character;
    while (true)
    {
        cin >> character;
        if (character == '/')
        {
            break;
        }
        message += character;
    }
    int pos = 0;
    string otp;
    while (true) {
        pos = message.find("maOTP", pos);
        if (pos == -1) {
            otp = "No OTP";
            break;
        }
        otp = message.substr(pos + 5, 6);
        if (isValidOTP(otp)) {
            break;
        } else {
            pos += 11;
        }
    }

    cout << otp;

    return 0;
}