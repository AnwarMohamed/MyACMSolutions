#include <cstring>
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum;
    while(true)
    {
        cin >> n;
        if (n == 0) return 0;

        sum=0;

        for (int i=n; i>0; i--)
        {

            sum = sum + ((2*(n-i)) + 1 + ((n-i)*(n-i)));
        }
        printf("%d\n", sum);
    }
    return 0;
}
