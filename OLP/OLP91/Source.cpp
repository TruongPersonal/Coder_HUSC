#include <iostream>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen(".build/Input.inp", "r", stdin);
		freopen(".build/Output.out", "w", stdout);
	#endif

	int a, b;
	int c;
	cin >> a >> b >> c;
	if (c % 2 == 0)
	{
		if (a >= 0 && b >= 0)
		{
			if (a == b)
				cout << "=";
			else if (a > b)
				cout << ">";
			else if (a < b)
				cout << "<";
		}
		else if (a < 0 && b < 0)
		{
			if (a == b)
				cout << "=";
			else if (a < b)
				cout << ">";
			else if (a > b)
				cout << "<";
		}
		else if (a >= 0 && b < 0)
		{
			if (a == -b)
				cout << "=";
			else if (a > -b)
				cout << ">";
			else if (a < -b)
				cout << "<";
		}
		else if (a < 0 && b >= 0)
		{
			if (b == -a)
				cout << "=";
			else if (-a > b)
				cout << ">";
			else if (-a < b)
				cout << "<";
		}
	}
	else
	{
		if (a == b)
			cout << "=";
		else if (a > b)
			cout << ">";
		else if (a < b)
			cout << "<";
	}

	return 0;
}