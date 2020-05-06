#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main()
{
 
    long long int t,a,sum,cardslevel;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>a;

        cardslevel=1;
        while(a>=2)
        {
            a-=cardslevel*3-1;
            cardslevel++;
        
            if(a<cardslevel*3-1 && cardslevel>1)
            {
                cardslevel=1;
                sum++;
            }

        }
        cout<<sum<<endl;
    }
    return 0;
}