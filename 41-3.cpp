#include<iostream>
using namespace std;
#include<stack>

int main ()
{
    stack <int> st;

    for (int i=5 ; i>0; i--)
    {
        st.push(i);                       //push()
    }

    cout<<"Size = "<<st.size()<<endl<<endl;

    if (st.empty()== true )               //empty()
        cout<<"Stack is empty! \n\n";
    else
        cout<<"Stack is not empty! \n\n";

    cout<<"Stack =  ";
    while (!st.empty())
    {
        cout<<st.top()<<"  ";
        st.pop();                         //pop()
    }

    cout<<endl;
    return 0;

}
