#include <bits/stdc++.h>

#define endln "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
#define display(A) for(auto x : A) cout<<x<<" "; cout<<"\n";

typedef long long ll;
typedef long l;
#define mod 1000000007
//#define MAX 1000000007

using namespace std;

bool isPrime(int n)
{
    if (n <= 3)
        return true;
  
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

//int prime[MAX]; 
// void sieve()
// {
//   for (int i = 2; i < MAX; i++)
//   {
//     if (prime[i])
//     {
//       for (int j = i * i; j < MAX; j += i)
//       {
//         prime[j] = 0;
//       }
//     }
//   }
 
//   for (int i = 3; i < MAX; i++)
//   {
//     prime[i] += prime[i - 1];
//   }
// }
int main(){
	int t=0;
	cin>>t;
	while(t--){
		int x=0;
		int n=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				int y=a[i]^a[j];
				for(int k=j+1;k<n;k++){
					for(int f=k+1;f<n;f++){
						int z=a[k]^a[f];
						if(y==z){
							x=1;
							break;
						}
					}
					if(x==1){
						break;
					}
				}
				if(x==1){
					break;
				}
				
			}
			if(x==1){
				break;
			}
		}
		if(x==0){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
}