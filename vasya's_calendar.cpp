#include <stdio.h>
#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int days, months, steps =0;
    scanf("%d", &days);
    scanf("%d", &months);

    int tmp[months];

    for (int i=0; i<months; i++)
    {
        scanf("%d", &tmp[i]);
        if (tmp[i] != days && i+1 != months) steps += days - tmp[i];
    }

    cout << steps << endl;
    return 0;
}
