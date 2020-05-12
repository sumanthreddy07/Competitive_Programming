#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>

#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
#define PAIR pair<long,long>

using namespace std;
 
int main()
{
 
    L t,i,j,flag=0,sum=0;
    cin>>t;
    while(t--)
    {
        L n0,n1,n2;
        vector<int> arr;
        cin>>n0>>n1>>n2;

        if(n2>0)
        {
            arr.push_back(1);
            while(n2!=0)
            {
                arr.push_back(1);
                n2--;
            }
        }

        if(arr.size()>0)
        {
            if(n1>0)
            {
                if(n1%2==0)
                {
                    n1--;
                    arr.insert(arr.begin(),0);
                }
                
                arr.push_back(0);
                n1--;

                while(n1>0)
                {
                    arr.push_back(10);
                    n1-=2;
                }
            }
        }
        else
        {
            if(n1%2==0)
            {
                n1--;
                arr.push_back(0);
            }
            while(n1>0)
            {
                arr.push_back(10);
                n1-=2;
            }
        }
        

        if(arr.size()>0)
        {
            while(n0!=0)
            {
                arr.push_back(0);
                n0--;
            }
        }
        else
        {
            arr.push_back(0);
            while(n0--)
            {
                arr.push_back(0);
            }
        }
        
        if(arr.size()>0)
            run(i,0,arr.size()-1)
                cout<<arr[i];
        cout<<endl;
    }
    return 0;
}