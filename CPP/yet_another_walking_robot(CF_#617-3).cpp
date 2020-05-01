#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main()
{
 
    long int t;
    cin>>t;
    while(t--)
    {
        long n;
        string s;
        cin>>n>>s;

        long start=-1,end=s.length();
        map<pair<int,int>, int> traverse;
        pair<int,int>current ={0,0};
        traverse[current]=0;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
                --current.first;
            else if(s[i]=='R')
                ++current.first;
            else if(s[i]=='U')
                ++current.second;
            else
                --current.second;
            
            if(traverse.count(current))
            {
                if(i-traverse[current]+1<end-start+1)
                {
                    start=traverse[current];
                    end=i;
                }
            }
            traverse[current]=i+1;
        }
        if(start==-1)
            cout<<-1<<endl;
        else
            cout<<start+1<<" "<<end+1<<endl;
    }
    return 0;
}