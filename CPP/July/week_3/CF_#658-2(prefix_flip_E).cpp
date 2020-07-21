#include <bits/stdc++.h>
#include <vector>
#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> for sleep
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846

using namespace std;
  
int main()
{
 
    L t,j,flag=0,sum=0;
    cin>>t;
    while(t--)
    {
        int i,n,flips=0;
        cin>>n;
        string a,b;
        cin>>a>>b;
        vector<L>X;

        if(n==1)
        {
            if(a.compare(b)!=0)
                cout<<1<<" "<<1<<endl;
            else
                cout<<0<<endl;
        }
        else
        {
            revrun(i,0,n-1)
            {
                if(b[i]!=a[i])
                {
                    if(b[i]!=a[0])
                    {   
                    }
                    else
                    {
                        if(a[0]=='0')
                            a.replace(0,1,"1");
                        else
                            a.replace(0,1,"0");
                        flips++;
                        X.push_back(1);
                        
                        
                    }
                    run(j,0,i)
                        {
                            if(a[j]=='0')
                                a.replace(j,1,"1");
                            else
                                a.replace(j,1,"0");
                        }
                        reverse(a.begin(),a.begin()+i+1); 
                        flips++;
                    
                        X.push_back(i+1);
                    
                }
            }
            cout<<flips<<" ";
            run(i,0,flips-1)
                cout<<X[i]<<" ";
            cout<<endl;
        }        

    }
    return 0;
}
