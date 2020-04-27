#include <bits/stdc++.h>

using namespace std;
 
int main()
{
 
    int t,prev=0,count=0,arr;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>arr;

        if(arr==0 || (arr==1 && prev==1) || (arr==2 && prev==2))
        {
            count++;
            arr=0;
        }
        else if(arr==3)
        {
            if(prev==1)
                arr=2;
            else if(prev==2)
                arr=1;
            else
                arr=0;
            
        }
        
        prev=arr;
    }
    cout<<count;
    return 0;
}