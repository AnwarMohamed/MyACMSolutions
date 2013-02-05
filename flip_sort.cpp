#include <stdio.h>
#include <cstring>
#include <ctype.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, counter;
    while(scanf("%d", &n) != EOF)
    {
        int num[n];
        counter = 0;
        for (int i=0; i<n; i++)
        {
            scanf("%d", &num[i]);
        }

        for (int i=0; i<n; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if (num[j] < num[i]) counter++;
            }
        }

        cout << "Minimum exchange operations : " << counter << endl;
    }

    return 0;
}
