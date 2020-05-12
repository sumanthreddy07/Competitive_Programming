#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4,side;
    cin>>x1>>y1>>x2>>y2;

    if(x1==x2 || y1==y2)
    {
        side=abs(x1+y1-x2-y2);
        
        if(x1==x2)
        {
            x3=min(1001,max(x1+side,x1-side));
            cout<<x3<<" "<<y1<<" "<<x3<<" "<<y2;
        }
        else if(y1==y2)
        {
            y3=min(1001,max(y1+side,y1-side));
            cout<<x1<<" "<<y3<<" "<<x2<<" "<<y3;    
        }

    }
    else if(abs(x1-x2)==abs(y1-y2))
    {
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;    
        
    }
    else
        cout<<-1;
    
    return 0;
}