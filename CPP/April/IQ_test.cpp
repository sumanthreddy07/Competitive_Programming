#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int num,i,flag;
    cin>>num;

    vector <int> arr;
    
    for(i=0;i<num;i++)
    {
        cin>>flag;
        arr.push_back(flag);
    }
    if(arr[0]%2==arr[1]%2)
        flag=arr[0]%2;
    else
    {
        if(arr[1]%2==arr[2]%2)
            flag=arr[1]%2;
        else
            flag=arr[2]%2;
    }
    
    for(i=0;i<arr.size();i++)
    {
        if(arr[i]%2!=flag)
        {
            cout<<i+1;
            break;
        }
    }
    return 0;    
}