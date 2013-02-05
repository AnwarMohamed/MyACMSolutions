#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int counter, n;
    while(true)
    {
        counter = 0;
        scanf("%d", &n);
        if (n==0) return 0;

        while(true)
        {
            counter += (n/3);
            n = (n/3) + (n%3);
            if (n==1) break;
            else if(n==2) { counter++; break; }
        }
        cout << counter << endl;
    }
    return 0;
}
