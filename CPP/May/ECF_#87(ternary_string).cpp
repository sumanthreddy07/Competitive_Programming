#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>

#define LL long long
#define L long
#define run(i,a,b) for(long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
#define PAIR pair<long,long>

using namespace std;
L findSubString(string str, string pat) 
{ 
    int len1 = str.length(); 
    int len2 = pat.length(); 
  
    int hash_pat[5] = {0}; 
    int hash_str[5] = {0}; 
  
    for (int i = 0; i < len2; i++) 
        hash_pat[pat[i]-48]++; 
  
    int start = 0, start_index = -1, min_len = INT_MAX; 
  
    int count = 0; 
    for (int j = 0; j < len1 ; j++) 
    { 
        hash_str[str[j]-48]++; 
  
        if (hash_pat[str[j]-48] != 0 && 
            hash_str[str[j]-48] <= hash_pat[str[j]-48] ) 
            count++; 
  
        if (count == len2) 
        { 
            while ( hash_str[str[start]-48] > hash_pat[str[start]-48] 
                || hash_pat[str[start]-48] == 0) 
            { 
  
                if (hash_str[str[start]-48] > hash_pat[str[start]-48]) 
                    hash_str[str[start]-48]--; 
                start++; 
            } 
  
            int len_window = j - start + 1; 
            if (min_len > len_window) 
            { 
                min_len = len_window; 
                start_index = start; 
            } 
        } 
    } 
  
    if (start_index == -1) 
        return 0; 
     
  
    return min_len; 
}
int main()
{
 
    L t,i,j,flag=0,sum=0;
    cin>>t;
    while(t--)
    {
        L flag1=0,flag2=0,flag3=0;
        string s,s1="123";
        cin>>s;

        run(i,0,s.length()-1)
        {
            if(s[i]=='1')
                flag1=1;
            else if(s[i]=='2')
                flag2=1;
            else
                flag3=1; 
        }
        if(flag1==0 || flag2==0 || flag3==0)
            cout<<0<<endl;
        else
        {
            cout<<findSubString(s,s1)<<endl;
        }
    }
    return 0;
}