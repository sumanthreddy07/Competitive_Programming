#include <iostream>
#include <vector>
//#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,b,a) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846

using namespace std;
  
int main()
{
 
    LL min,t,i,j,flag=0,sum=0,max;
    cin>>t;
    vector<LL> arr(t),brr(t);

    run(i,0,t-1)
    {
        cin>>arr[i];
        brr[i]=arr[i];
    }
    run(i,0,t-1)
    {
        min=i,max=i;
        run(j,i+1,t-1)
        {
            if(arr[j]<arr[min])
                min=j;
            if(brr[j]>brr[max])
                max=j;
        }
        if(min!=i)
        {
            swap(arr[i],arr[min]);
            flag++;
        }
        if(max!=i)
        {
            swap(brr[i],brr[max]);
            sum++;
        }

    }
    if(flag<sum)
        cout<<flag<<endl;
    else
        cout<<sum<<endl;
    return 0;
}
