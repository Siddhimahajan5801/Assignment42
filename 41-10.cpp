#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void NGE(int arr[],int size)
{
   stack <int> s;
   s.push(arr[0]);

   for (int i=1; i<size; i++)
   {
       if (s.empty())
       {
           s.push(arr[i]);
           continue;
       }

       while(s.empty() == false && s.top()<arr[i])
       {
           cout<<s.top()<<"  -->  "<<arr[i]<<endl;
           s.pop();
       }

       s.push(arr[i]);
   }
   while (s.empty()== false)
   {
       cout<<s.top()<<" -->  "<<-1<<endl;
       s.pop();
   }
}

int main ()
{
    int arr[4] = {4,5,2,25};

    NGE(arr,4);

    return 0;

}
