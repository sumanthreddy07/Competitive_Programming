#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int *a;
    int i,j,volume=0,n,inp;
    cout<<"Enter the number N:";
    cin>>n;
    a=(int*)malloc(sizeof(int)*n);

    cout<<"Enter the N non-negative numbers:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
        for(j=i;j<n;j++)
        {
                if(volume<abs((j-i)*(a[j]-a[i])))
                    volume=abs((j-i)*(a[j]-a[i]));
        }

    cout<<"volume is: "<<volume;

    return 0;
}
