

#include<iostream>

using namespace std;
bool isComment (string &input,int len)
{
    if ( input.empty())
    {
        return false;
    }

    if (input[0] == '/' && input [1]== '/')
    {
        return true;
    }

    else if ((input[0] == '/' && input [1]== '*') && (input[len] == '/' && input [len-1]=='*'))

    {
        return true;
    }

else{
      return false;
}

}


    int main ()
{
    string input;
    cout<<"Enter input:"  ;
    getline(cin,input);

    int len=input.size()-1;
    if (isComment(input,len))

    {
        cout <<"the input is a comment. " <<endl;
    }
    else
    {

        cout <<"the input is multiple line comment. " <<endl;

    }
    return 0;
}




