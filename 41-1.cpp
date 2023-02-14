#include<iostream>
using namespace std;
#include<stack>

int main ()
{
    stack <int> st;

    for (int i=5 ; i>0; i--)
    {
        st.push(i);
    }

    cout<<"Stack = ";
    while (!st.empty())
    {
        cout<<st.top()<<"  ";
        st.pop();
    }

    cout<<endl;

    return 0;

}
