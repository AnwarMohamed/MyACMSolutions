#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, y1, x2, y2;
    while (true)
    {

        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        if (x1 == 0 && y1 ==0 && x2 ==0 && y2==0)
        {
            break;
            return 0;
        }
        else if (x1 == x2 && y1 == y2)
        {
            printf("%d\n",0);
        }
        else if ((x1 == x2) || (y1 == y2) || (abs(y2-y1) == abs(x2-x1)) )
        {
            printf("%d\n",1);
        }
        else
        {
            printf("%d\n",2);
        }

    }
    return 0;
}
