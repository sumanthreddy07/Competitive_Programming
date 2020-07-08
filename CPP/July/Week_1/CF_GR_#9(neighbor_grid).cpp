#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846

using namespace std;
  
int main()
{
 
    L t,i,j,flag=0,sum=0;
    cin>>t;
    while(t--)
    {
        LL n,m,innermax=0,outermax=0,edgemax=0;
        cin>>n>>m;
        LL arr[n][m];

        run(i,0,n-1)
            run(j,0,m-1)
            {
                cin>>arr[i][j];
            
                    if(i==0 && (j==0 || j==m-1))
                        outermax=max(outermax,arr[i][j]);
                    else if(i==n-1 && (j==0 || j==m-1))
                        outermax=max(outermax,arr[i][j]);
                    else if(i==0 || j==0 || i==n-1 || j== m-1)
                        edgemax=max(edgemax,arr[i][j]);
                    else
                        innermax=max(innermax,arr[i][j]);
            }
        if(outermax>2 || innermax>4 || edgemax>3)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            run(i,0,n-1)
            {
                run(j,0,m-1)
                {
                    if(i==0 && (j==0 || j==m-1))
                        cout<<2<<" ";
                    else if(i==n-1 && (j==0 || j==m-1))
                        cout<<2<<" ";
                    else if(i==0 || j==0 || i==n-1 || j== m-1)
                        cout<<3<<" ";
                    else
                        cout<<4<<" ";
                }
                cout<<endl;
            }
        }
        

    }
    return 0;
}
