#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;
int main()
{
    unsigned int n;
    int oldR;
    int oldD;
    int min;
    while (true)
    {
        min = 2000000;
        oldR = -1;
        oldD = -1;

        scanf("%d",&n);
        if (n == 0) return 0;

        char string[n];
        scanf("%s", &string);

        for (unsigned int i=0; i<n; i++)
        {
            if (string[i] == 'Z')
            {
                printf("0\n");
                break;
            }
            else if (string[i] == 'D')
            {
                if (oldD < 0) oldD = i;
                if (oldR >= 0)
                {
                    if (min > abs(i - oldR))
                    {
                        min = abs(i - oldR);
                        oldD = i;
                    } else { oldD = i; }
                }
                else if (oldR < 0) { oldD = i; }
            }
            else if (string[i] == 'R')
            {
                if (oldR < 0) oldR = i;
                if (oldD >= 0)
                {
                    if (min > abs(oldD - i))
                    {
                        min = abs(oldD - i);
                        oldR = i;
                    } else { oldR = i; }
                }
                else if (oldD < 0) { oldR = i; }
            }

            if (i+1 == n) printf("%d\n", min);
        }
    }

    return 0;
}
