#include<iostream>
using namespace std;
#include<stack>
#include<string.h>

int main ()
{
    stack <char> S;

    string str;

    cout<<"Input String : \n";
    getline(cin,str);

    for (int i=0; i<str.length(); i++)
    {
        S.push(str[i]);
    }


    cout<<"\nReversed String = ";
    while (!S.empty())
    {
        cout<<S.top();
        S.pop();
    }

    cout<<endl;

    return 0;

}
