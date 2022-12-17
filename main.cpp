
#include <bits/stdc++.h>
using namespace std;

#define co(x) cout << (x) << endl;

int main(int argc, char const *argv[])
{
	string in;
	while (true)
	{
		cin >> in;
		if (in == "exit")
			break;
		else
		{
			co("Error: " + in + "は無効です");
		}
	}

	return 0;
}
