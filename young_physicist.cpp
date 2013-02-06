#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int v1,v2,v3;
    int sum[3];

    memset(&sum, 0 , sizeof(sum));

    for (int i=0; i<n; i++)
    {
        scanf("%d %d %d", &v1, &v2, &v3);

        sum[0] += v1;
        sum[1] += v2;
        sum[2] += v3;
    }

    for (int j=0; j<3; j++)
    {
        if (sum[j] != 0)    { cout << "NO" << endl; return 0; }
    }

    cout << "YES" << endl;
    return 0;
}
