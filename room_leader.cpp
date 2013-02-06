#include <stdio.h>
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int p,m,q1,q2,q3,q4,q5;
    int sum[n];
    string name[n];
    int max = -100000 , pmax = 0;

    for (int i=0; i<n; i++)
    {
        cin >> name[i];
        scanf("%d %d %d %d %d %d %d", &p, &m, &q1, &q2, &q3, &q4, &q5);
        sum[i] = q1 + q2 + q3 + q4 + q5 + (100*p) - (50*m);
        if (int(sum[i]) > int(max)) { max = sum[i]; pmax = i; }
    }
    cout <<  name[pmax] << endl;
}
