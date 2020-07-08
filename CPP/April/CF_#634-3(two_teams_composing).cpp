#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
 
using namespace std;
 
int main()
{
 
    int t;
    
    cin>>t;
    while(t--)
    {
        int n,temp,occur,uniq;
        cin>>n;
        vector<int> arr(n+1,0);

        for(int i=0;i<n;i++)
        {
            cin>>temp;
            arr[temp]++;
        }
        occur = *max_element(arr.begin(), arr.end());
		uniq = n+1-count(arr.begin(),arr.end(),0);
		cout << max(min(occur-1,uniq),min(occur,uniq-1))<<endl;
    }

    return 0;
}