#include <iostream>
#include <vector>
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
        flag=0;
        L n;
        cin>>n;
        n=n+n;
        vector<int>A(n),B(n+1,0),C;

        run(i,0,n-1)
        {
            cin>>A[i];
            B[A[i]]++;
            if(B[A[i]]%2==0)
                C.push_back(A[i]);
        }
        run(i,0,C.size()-1)
            cout<<C[i]<<" ";
        cout<<endl;
    }
    return 0;
}
