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

    cout<<"Top most element = "<<st.top()<<endl;

    return 0;

}
