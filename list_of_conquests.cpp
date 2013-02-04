#include <stdio.h>
#include <cstring>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    string word;
    map<string,int> list;
    char line[256];
    map<string,int>::iterator curpos;

    for (int i=0; i<=n; i++)
    {

        cin.getline(line,sizeof(line));
        word = string(line).substr(0, string(line).find(' '));

        if (word.size() == 0) continue;

        curpos = list.find(word);
        if (curpos == list.end())
        {
            list.insert(pair<string,int>(word,1));
        }
        else
        {
            curpos->second++;
        }
    }


    for (map<string,int>::iterator j = list.begin(); j != list.end(); j++)
    {
        cout << j->first << " " << j->second << endl;
    }

    return 0;
}
