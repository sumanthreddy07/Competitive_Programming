#include <iostream>
#include <vector>
//#include <string>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> for sleep
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

        vector<LL> arr(n);
        run(i,0,n-1)
        {
            cin>>arr[i];
        }
        run(i,0,n-1)
        {
            if(arr[i]!=1)
                break;
            flag++;
        }
        if(flag%2==0)
        {
            if(n==flag)
                cout<<"Second"<<endl;
            else
                cout<<"First"<<endl;
        }
        else
        {
            if(n==flag)
                cout<<"First"<<endl;
            else
                cout<<"Second"<<endl;
        }
        
        
        
    }
    return 0;
}
