#include<stdio.h>
#include<iostream>

using namespace std;
int ispalindrome(string s)
{
    int l=s.length();
    int i,j;

    for(i=0,j=l-1;i<=j;i++,j--)
    {
        if(s[i]!=s[j])
            return 0;
    }
    return 1;
}
int main()
{
    int flag=0, count=0;
    string str;
    cout<<"Enter the String: ";
    cin>>str;

    while(str.length()>0)
    {
        if(ispalindrome(str))
        {
            flag=1;
            break;
        }
        else
        {
            count++;
        str.erase(str.begin() + str.length()-1);
        }
    }

    cout<<count;
    return 0;
}
