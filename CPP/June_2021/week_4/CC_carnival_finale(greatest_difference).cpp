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
bool isSmaller(string str1, string str2)
{
    // Calculate lengths of both string
    int n1 = str1.length(), n2 = str2.length();
 
    if (n1 < n2)
        return true;
    if (n2 < n1)
        return false;
 
    for (int i = 0; i < n1; i++)
        if (str1[i] < str2[i])
            return true;
        else if (str1[i] > str2[i])
            return false;
 
    return false;
}
 
// Function for find difference of larger numbers
string findDiff(string str1, string str2)
{
    // Before proceeding further, make sure str1
    // is not smaller
    if (isSmaller(str1, str2))
        swap(str1, str2);
 
    // Take an empty string for storing result
    string str = "";
 
    // Calculate length of both string
    int n1 = str1.length(), n2 = str2.length();
 
    // Reverse both of strings
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
 
    int carry = 0;
 
    // Run loop till small string length
    // and subtract digit of str1 to str2
    for (int i = 0; i < n2; i++) {
        // Do school mathematics, compute difference of
        // current digits
 
        int sub
            = ((str1[i] - '0') - (str2[i] - '0') - carry);
 
        // If subtraction is less then zero
        // we add then we add 10 into sub and
        // take carry as 1 for calculating next step
        if (sub < 0) {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;
 
        str.push_back(sub + '0');
    }
 
    // subtract remaining digits of larger number
    for (int i = n2; i < n1; i++) {
        int sub = ((str1[i] - '0') - carry);
 
        // if the sub value is -ve, then make it positive
        if (sub < 0) {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;
 
        str.push_back(sub + '0');
    }
 
    // reverse resultant string
    reverse(str.begin(), str.end());
 
    return str;
}

ll i,j,k;

void solve()
{
	int n,sum;
	cin >> n >> sum;
	if(sum > 9*n)
	{
		cout << "NO\n";
		return;
	}
	int s = sum;
	string mi, ma;
	run(i,0,n-1)
	{
		int z = min(9,s);
		s -= z;
		ma += char(z+'0');
	}
	
	sum--;
	mi = "1";
	run(i,0,n-2)
		mi += '0';
	
	for(i = n-1; i >= 0 && sum > 0; i--)
	{
		int z = min(9,sum);
		sum -= z;
		mi[i] += z;
	}
	
	string ans = findDiff(ma,mi);
	reverse(ans.begin(),ans.end());
	while(ans.back() == '0') ans.pop_back();
	reverse(ans.begin(),ans.end());
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