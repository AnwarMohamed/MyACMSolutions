#include <stdio.h>
#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    vector<int> tmp;
    int num;

    for (int i=0; i<n; i++)
    {
        scanf("%d", &num);
        tmp.push_back(num);
    }

    sort(tmp.begin(), tmp.end());

    if (n ==1)
    {
        if (tmp[0] != 1) { cout << int(1) << endl; return 0; }
        cout << int(tmp[n-1] + 1) << endl;
    }
    else
    {
        for (int j=1; j<n; j++)
        {
            if (tmp[0] != 1) { cout << int(1) << endl; break; }
            if (tmp[j] - tmp[j-1] != 1) { cout << int(tmp[j-1] + 1) << endl; break; }
            if (j+1 == n) cout << int(tmp[j] + 1) << endl;
        }
    }

    return 0;
}
