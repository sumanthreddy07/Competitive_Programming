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
 
    L n,k,i,j,flag=0,sum=0;
    cin>>n>>k;

    priority_queue <int> pqboth,pqalice,pqbob;
    L arr[n][3];
    run(i,0,n-1)
    {
        run(j,0,2)
            cin>>arr[i][j];

        if(arr[i][1]==1 && arr[i][2]==1)
            pqboth.push(-arr[i][0]);
        else if(arr[i][1]==1)
            pqalice.push(-arr[i][0]);
        else if(arr[i][2]==1)
            pqbob.push(-arr[i][0]);
    }

    if( (pqboth.size()+pqalice.size()<k) || (pqboth.size()+pqbob.size()<k) )
        cout<<-1<<endl;
    else    
    {
       while(k--)
        {
            if( !pqboth.empty() && (pqalice.empty() || pqbob.empty() || pqboth.top()>(pqalice.top()+pqbob.top())))
            {
                sum-=pqboth.top();
                pqboth.pop();
            }
            else
            {
                sum-=(pqalice.top()+pqbob.top());
                pqalice.pop();
                pqbob.pop();
            }
            
        }
        cout<<sum<<endl;

    }
    return 0;
}