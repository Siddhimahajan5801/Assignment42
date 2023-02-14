#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void display(stack <int> temp)
{
    while (!temp.empty())
    {
        cout<<temp.top()<<"  ";
        temp.pop();
    }

    cout<<endl;
}

void sort_stack(stack <int> st)
{
    stack <int> temp;
    int k;

    temp.push(st.top());
    st.pop();

    while (!st.empty())
    {
        k = st.top();
        st.pop();

        if (k>temp.top())
        {
            temp.push(k);
        }
        else
        {
            while(k<temp.top())
          {
            st.push(temp.top());
            temp.pop();
          }
             temp.push(k);
        }
    }

    cout<<"\nStack in sorted (Descending) order is : ";
    display(temp);
}

int main ()
{
    stack <int> st;

    st.push(6);
    st.push(2);
    st.push(9);
    st.push(3);
    st.push(1);

    cout<<"Stack : ";
    display(st);

    sort_stack(st);

    return 0;

}
