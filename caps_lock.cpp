#include <stdio.h>
#include <cstring>
#include <ctype.h>
#include <iostream>

using namespace std;

int main()
{
    char word[100];

    scanf("%s", &word);

    if (islower(word[0]))
    {
        for (int i=1; i<strlen(word); i++)
        {
            if(islower(word[i]))
            {
                cout << word << endl;
                return 0;
            }
        }

        for (int i=0; i<strlen(word); i++)
        {
            if (i==0) putchar(toupper(word[i]));
            else putchar(tolower(word[i]));
        }

    }
    else if (isupper(word[0]))
    {
        for (int i=1; i<strlen(word); i++)
        {
            if(islower(word[i]))
            {
                cout << word << endl;
                return 0;
            }
        }

        for (int i=0; i<strlen(word); i++)
        {
            putchar(tolower(word[i]));
        }
    }

    printf("\n");
    return 0;
}
