#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{

    long int ab1=0,ba1=0,ab2=0,ba2=0;
    string s;
    cin>>s;

    ab1=s.find("AB");
    ba1=s.find("BA",ab1+2);

    ba2=s.find("BA");
    ab2=s.find("AB",ba2+2);

    if((ab1!=-1 && ba1!=-1) || (ab2!=-1 && ba2!=-1))
        cout<<"YES";
    else
        cout<<"NO";
    
    return 0;
}