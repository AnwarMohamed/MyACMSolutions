#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int  main ()
{
    int d[4];
    int total;
    int t=0;

    for (int i=0; i<4; i++) cin >> d[i];
    cin >> total;


    if (d[0] == 1 || d[1] == 1 || d[2] == 1 || d[3] == 1 )
    {
        cout << total << endl; return 0;
    }

    for (int k=1; k<=total; k++)
    {

        if (k %d[0] == 0 || k %d[1] == 0 || k %d[2] == 0 || k %d[3] == 0) { t++; }
    }


    cout << t << endl;
    return  0;
}
