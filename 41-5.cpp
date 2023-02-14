#include<iostream>
using namespace std;
#include<stack>

int main ()
{
    stack <int> stack1;

    for (int i=5 ; i>0; i--)
    {
        stack1.push(i);
    }

    stack <int> stack2(stack1);

    cout<<"Stack-1 = ";
    while (!stack1.empty())
    {
        cout<<stack1.top()<<"  ";
        stack1.pop();
    }

    cout<<endl<<endl;

    cout<<"Stack-2 = ";
    while (!stack2.empty())
    {
        cout<<stack2.top()<<"  ";
        stack2.pop();
    }

    cout<<endl;

    return 0;

}
