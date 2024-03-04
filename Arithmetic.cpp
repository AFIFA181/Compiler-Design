
#include<iostream>

using namespace std;

int main    ()

{
    string s;
    cin>>s;
    for (int i=0; i<s.size();i++)

    if (s [i]== '+'|| s [i]=='-' ||  s [i]== ','||s [i]== '/'||s [i]== '=' )

    {
        cout<<"Operator: "<<s[i]<<endl;

    }

    else
        {
        cout<<" No Operator is found : "<<s[i]<<endl;

    }






}
