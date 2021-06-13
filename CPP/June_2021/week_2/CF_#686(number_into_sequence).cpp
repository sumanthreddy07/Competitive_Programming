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
    long long n;
		cin >> n;
	
		vector<pair<int, long long>> val;
		for (long long i = 2; i * i <= n; ++i) {
			int cnt = 0;
			while (n % i == 0) {
				++cnt;
				n /= i;
			}
			if (cnt > 0) {
				val.push_back({cnt, i});
			}
		}
		if (n > 1) {
			val.push_back({1, n});
		}
	
		sort(val.rbegin(), val.rend());
		vector<long long> ans(val[0].first, val[0].second);
		for (int i = 1; i < int(val.size()); ++i) {
			for (int j = 0; j < val[i].first; ++j) {
				ans.back() *= val[i].second;
			}
		}
	
		cout << ans.size() << endl;
		for (auto it : ans) cout << it << " ";
		cout << endl;

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