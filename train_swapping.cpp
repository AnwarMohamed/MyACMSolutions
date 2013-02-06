#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int n, counter,t;
    scanf("%d", &t);

    for (int z=0; z<t; z++)
    {
        scanf("%d", &n);
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

        cout << "Optimal train swapping takes " << counter << " swaps." << endl;
    }

    return 0;
}
