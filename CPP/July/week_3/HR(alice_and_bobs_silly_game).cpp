#include <iostream>
#include <vector>
//#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <math.h>
//#include <unistd.h> for sleep

//#define revrun(i,a,b) for(long i=b;i>=a;i--)
//#define PAIR pair<long,long>
//#define pi 3.14159265358979323846

using namespace std;

vector<bool>prime(100000+1,1);
void SieveOfEratosthenes(long long n) 
{
    int flag=0;
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == 1) 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = 0;
    } 
} 
int main()
{
    SieveOfEratosthenes(100000);
    long long i,t;
    cin>>t;
    while(t--)
    {
        long long n;
        long flag=0;
        cin>>n;
        for (int p=2; p<=n; p++) 
            if (prime[p])
                flag++;
        if(flag%2==0)
            cout<<"Bob"<<endl;
        else
            cout<<"Alice"<<endl;
        
    }
    return 0;
}
