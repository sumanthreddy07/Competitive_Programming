#include <iostream>
#include <vector>
//#include <string>
#include <algorithm>
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
#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void rotatelayer(vector<vector<LL>>&A,int top,int bottom,int left,int right,LL rotations)
{
    vector<LL>temp;
    L currot=rotations%((bottom-top+right-left)*2);
    run(i,left,right-1)
        temp.push_back(A[top][i]);
    run(i,top,bottom-1)
        temp.push_back(A[i][right]);
    revrun(i,left+1,right)
        temp.push_back(A[bottom][i]);
    revrun(i,top+1,bottom)
        temp.push_back(A[i][left]);

    L j=0,n=temp.size();
    run(i,left,right-1)
    {
        A[top][i]=temp[ (currot+j)%n ];
        j++;
    }
    run(i,top,bottom-1)
    {
        A[i][right]=temp[ (currot+j)%n ];
        j++;
    }
    revrun(i,left+1,right)
    {
        A[bottom][i]=temp[ (currot+j)%n ];
        j++;
    }
    revrun(i,top+1,bottom)
    {
        A[i][left]=temp[ (currot+j)%n ];
        j++;
    }
}
int main()
{
    IOS;
    int n,m;
    LL rotation;
    cin>>n>>m>>rotation;

    vector<vector<LL>>A(n,vector<LL>(m));

    run(i,0,n-1)
        run(j,0,m-1)
            cin>>A[i][j];

    L layers=min(n/2,m/2)-1;

    run(i,0,layers)
        rotatelayer(A,i,n-1-i,i,m-1-i,rotation);

    run(i,0,n-1)
    {
        run(j,0,m-1)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
