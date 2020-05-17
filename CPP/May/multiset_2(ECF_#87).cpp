#include <bits/stdc++.h>
#include <vector>
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)

using namespace std;
 
int main()
{
    L n,i,k,qui;
    cin>>n>>k;
    vector<L> arr(n);
    run(i,0,n-1)
        cin>>arr[i];

    while(k--)
    {
        cin>>qui;

        if(qui<0)
        {
            arr.erase(arr.begin()+abs(qui)-1);
        }
        else
        {
            if(arr[arr.size()-1]<qui)
                arr.push_back(qui);
            else
            {
                run(i,0,arr.size()-1)
                    if(arr[i]>qui)
                        break;
            
                arr.insert(arr.begin()+i,qui);
            }
        }
        
    }

    if(arr.size()==0)
        cout<<0<<endl;
    else
    {    
        cout<<arr[0]<<endl;
    }
    return 0;
}