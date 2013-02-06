#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    short n,c,r;
    scanf("%hd", &c);
    scanf("%hd", &r);
    scanf("%hd", &n);

    short table[c][r];
    short cmdc,cmdr;
    char cmd[5];

    for (short i=0; i<c; i++)
    {
        for (short j=0; j<r; j++)
        {
            scanf("%hd", &table[i][j]);
        }
    }

    for (short k=0; k<n; k++)
    {
        scanf("%s", &cmd[0]);
        scanf("%hd", &cmdc);
        scanf("%hd", &cmdr);

        if (cmd[0] == 'c')
        {
            short tmp1[c][1];
            for (short l=0; l<c; l++)
            {
                tmp1[l][1] = table[l][cmdr-1];
                table[l][cmdr-1] = table[l][cmdc-1];
                table[l][cmdc-1] = tmp1[l][1];
            }
        }
        else if (cmd[0] == 'r')
        {
            short tmp2[1][r];
            for (short l=0; l<r; l++)
            {
                tmp2[1][l] = table[cmdr-1][l];
                table[cmdr-1][l] = table[cmdc-1][l];
                table[cmdc-1][l] = tmp2[1][l];
            }
        }
        else if (cmd[0] == 'g')
        {
            cout << table[cmdc-1][cmdr-1] << endl;
        }
    }

    return 0;
}
