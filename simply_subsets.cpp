#include <stdio.h>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;
int main()
{
    char lineA[256], lineB[256];
    while(true)
    {
        cin.getline(lineA,sizeof(lineA));
        if (lineA[0] == NULL) break;
        cin.getline(lineB,sizeof(lineB));
        if (lineB[0] == NULL) break;

        string temp;
        string sA = string(lineA);
        string sB = string(lineB);

        stringstream ssA(sA);
        stringstream ssB(sB);
        vector<string> xA;
        vector<string> xB;

        unsigned int n=0;

        while( ssA >> temp)   {   xA.push_back(temp); }
        while( ssB >> temp)   {   xB.push_back(temp); }

        if (xA.size() == xB.size())
        {
            for (unsigned int i=0; i < xB.size(); i++)
            {
                if (sA.find(xB[i]) == string::npos)    n++;
            }

            if (n == 0) cout << "A equals B" << endl;
            else if (n== xA.size()) cout << "A and B are disjoint" << endl;
            else cout << "I'm confused!" << endl;
        }
        else if (xA.size() > xB.size())
        {
            for (unsigned int i=0; i < xB.size(); i++)
            {
                if (sA.find(xB[i]) == string::npos)    n++;
            }

            if (n== xB.size()) cout << "A and B are disjoint" << endl;
            else if (n == 0) cout << "B is a proper subset of A" << endl;
            else cout << "I'm confused!" << endl;
        }
        else //A < B
        {
            for (unsigned int i=0; i < xA.size(); i++)
            {
                if (sB.find(xA[i]) == string::npos)    n++;
            }

            if (n== xA.size()) cout << "A and B are disjoint" << endl;
            else if (n == 0) cout << "A is a proper subset of B" << endl;
            else cout << "I'm confused!" << endl;
        }
    }
    return 0;
}
