#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    long long int l,r,i,temp;
    cin>>l>>r;
    for(i=l;i<=r;i++)
    {
        temp=i;
        int arr[10]={0};

        while(temp!=0)
        {
            if(arr[temp%10])
                break;
            else
                arr[temp%10]=1;

            temp=temp/10;
            
            if(temp==0)
            {
                cout<<i;
                exit(0);
            }
        }
        
    }
    if(i==r+1)
        cout<<-1;

    return 0;
}