#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n, tmp = 0;
    cin >> n;

    string s;
    cin >> s;

    for (int i=1; i<n; i++)
    {
        if (s.c_str()[i] == s.c_str()[i-1]) tmp++;
    }

    cout << tmp << endl;
    return 0;
}
