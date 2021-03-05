#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string s = "aabbbbcccaaaA", res = "";
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    char c = s.at(0);

    int cnt = 1;
    for(int i=1; i<s.size(); i++)
    {
        if(s.at(i) == c)
        {
            cnt++;
        }
        else
        {
            ostringstream strg;
            strg<<cnt;
            string s1 = strg.str();

            res=res+s.at(i-1)+ s1;
            cnt = 1;
            c = s.at(i);
        }
    }
    ostringstream strg;
    strg<<cnt;
    string s1 = strg.str();
    res=res+s.at(s.size()-1)+ s1;


    cout<<res;
    return 0;
}
