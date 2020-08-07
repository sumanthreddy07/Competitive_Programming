#include <iostream>
#include <vector>
//#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> for sleep
//#include <limits.h>
//#include <map>
//#include <iterator>
//#define ITERATOR map<L,L>::iterator iter;
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
//#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
  
int main()
{
    IOS;
    L n;
    cin>>n;

    vector<vector<char>>A(n,vector<char>(n));

    run(i,0,n-1)
        run(j,0,n-1)
            cin>>A[i][j];

    if(n<=2)
    {
        run(i,0,n-1)
        {
            run(j,0,n-1)
                cout<<A[i][j];
            cout<<endl;
        }     
    }
    else
    {
        run(i,1,n-2)
            run(j,1,n-2)
            {
                if( A[i][j]>A[i-1][j] && A[i][j]>A[i+1][j] && A[i][j]>A[i][j-1] && A[i][j]>A[i][j+1])
                    A[i][j]='X';
            }

        run(i,0,n-1)
        {
            run(j,0,n-1)
                cout<<A[i][j];
            cout<<endl;
        }   
    }
    return 0;
}
