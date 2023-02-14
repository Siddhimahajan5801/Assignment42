#include<iostream>
using namespace std;
#include<stack>
#include<string.h>

int main ()
{
    stack <string> S;

    string str,temp="";

    cout<<"Input String : \n";
    getline(cin,str);

    for (int i=0; i<str.length(); i++)
    {
        if (str[i] == ' ')
        {
            S.push(temp);
            S.push(" ");
            temp="";
        }

        else
        {
            temp = temp + str[i];
        }

    }
    S.push(temp);

    cout<<"\nReversed String = ";
    while (!S.empty())
    {
        cout<<S.top();
        S.pop();
    }

    cout<<endl;

    return 0;

}
