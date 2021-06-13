#include <bits/stdc++.h>

#define endln "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
#define display(A) run(i,0,A.size()-1)cout<<A[i]<<" ";cout<<"\n";

typedef long long ll;
typedef long l;
#define mod 1000000007;

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

void solve()
{
        int n;
		cin >> n;
		vector<int> a(n);
		for (auto &it : a) cin >> it;
		vector<int> res(n + 1, 1);
		n = unique(a.begin(), a.end()) - a.begin();
		a.resize(n);
		for (int i = 0; i < n; ++i) {
			res[a[i]] += 1;
		}
		res[a[0]] -= 1;
		res[a[n - 1]] -= 1;
		int ans = 1e9;
		for (int i = 0; i < n; ++i) {
			ans = min(ans, res[a[i]]);
		}
		cout << ans << endln;
}
int main()
{
    IOS;
    l t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}