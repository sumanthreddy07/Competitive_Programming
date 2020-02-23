#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
    string str;
    int i,left=0;

    cout<<"Enter the string [only '(' or ')' ]: ";
    getline(cin, str);

    for(i=0;i<str.length();i++)
    {
        if(str[i]=='(')
            left++;
        else if(str[i]==')' && left>0)
            left--;
        else if(str[i]==')' && left==0)
        {
            cout<<"Error due to ) occuring before ( (NO)";
            exit(0);
        }
        else if(str[i]!=')' || str[i]!='(')
        {
            cout<<"Error";
            exit(0);
        }
    }
    if(left==0)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;

}
