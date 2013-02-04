#include <stdio.h>
#include <cstring>

using namespace std;
int main()
{
    char string[14];
    unsigned int n = 0;
    while(true)
    {
        scanf("%s", &string);
        if (string[0] == '#')   return false;

        n++;
        if (strcmp ("HELLO",string) == 0) printf("Case %d: ENGLISH\n", n);
        else if (strcmp ("HOLA",string) == 0) printf("Case %d: SPANISH\n", n);
        else if (strcmp ("HALLO",string) == 0) printf("Case %d: GERMAN\n", n);
        else if (strcmp ("BONJOUR",string) == 0) printf("Case %d: FRENCH\n", n);
        else if (strcmp ("CIAO",string) == 0) printf("Case %d: ITALIAN\n", n);
        else if (strcmp ("ZDRAVSTVUJTE",string) == 0) printf("Case %d: RUSSIAN\n", n);
        else printf("Case %d: UNKNOWN\n", n);
    }
    return 0;
}
