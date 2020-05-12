#include <bits/stdc++.h>
#include <vector>
 
using namespace std;
 
int main()
{
 
    int t;
    long int temp;
    cin>>t;
    while(t--)
    {
        int arr[9][9];
        for(int i=0;i<9;i++)
        {
            cin>>temp;

            for(int j=0;j<9;j++)
            {
                arr[i][8-j]=temp%10;
                if(arr[i][8-j]==2)
                    arr[i][8-j]=1;
                temp=temp/10;
            }
        }
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
                cout<<arr[i][j];
            cout<<endl;
        }
        
    }
    return 0;
}