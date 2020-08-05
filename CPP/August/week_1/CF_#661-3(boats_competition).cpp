#include <iostream>
#include <vector>
//#include <string>
#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> for sleep
//#include <limits.h>
#include <unordered_map>
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
    L t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<int>A(n);
        
        run(i,0,n-1)
            cin>>A[i];
        if(n<=2)
            cout<<n-1<<endl;
        else
        {
            sort(A.begin(),A.end());
            int mini=A[0]+A[1],maxi=A[n-1]+A[n-2],sum=0;
            run(j,mini,maxi)
            {
                int count=0;
                unordered_map<int,int>B;
                run(i,0,n-1)
                {
                    if(j-A[i]<=0)
                        continue;

                    if( B.find(j-A[i])==B.end() || B[j-A[i]]==0)
                    {
                        if(B.find(A[i])==B.end())
                            B.insert(make_pair(A[i],1));
                        else
                            B[A[i]]++;
                        
                    }
                    else if(B[j-A[i]]>0)
                    {
                        B[j-A[i]]--;
                        count++;
                    }
                    
                }
                sum=max(sum,count);
            }
            cout<<sum<<endl;
        }
        
        
    }
    return 0;
}
