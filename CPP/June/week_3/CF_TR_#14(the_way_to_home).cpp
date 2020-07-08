#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#define LL long long
#define L long
#define run(i,a,b) for(long long i=a;i<=b;i++)
#define revrun(i,a,b) for(long i=b;i>=a;i--)
#define PAIR pair<long,long>
#define pi 3.14159265358979323846
using namespace std;
L jumps=0;
L jump(string str,L cur_pos,LL j)
{
    L new_pos=-1;
    run(i,1,j)
    {
        if(cur_pos+i>str.length()-1)
            break;

        if(str[cur_pos+i]=='1')
            new_pos=cur_pos+i;
    }
    if(new_pos==-1)
    {
        jumps=-1;
        return jumps;
    }
    else if(new_pos==str.length()-1)
        return jumps+1;
    else
    {
        jumps++;
        return jump(str,new_pos,j);
    }
    
}
int main()
{
 
    L t,i,j,flag=0,sum=0;
    cin>>t>>j;
    string str;
    cin>>str;
    cout<<jump(str,0,j);
    return 0;
}
