#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
#define PAIR pair<long,long>
#define pi 3.14159265358979323846
using namespace std;
  
int main()
{
 
    L t,i,j,flag=0;
    cin>>t;
    while(t--)
    {
        L n,m,x,y,sum=0;
        cin>>n>>m>>x>>y;

        vector<string>arr(n);
        
        y=min(2*x,y);

        run(i,0,n-1)
        {
            cin>>arr[i];
            run(j,0,arr[i].length()-1)
            {
                if(arr[i][j]=='.' && arr[i][j+1]=='.' && j+1<arr[i].length())
                {
                    sum+=y;
                    j++;
                }
                else if(arr[i][j]=='.')
                    sum+=x;
            }
                
        }
        cout<<sum<<endl;
        

    }
    return 0;
}
