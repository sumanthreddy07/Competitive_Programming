#include <bits/stdc++.h>
#include <string>
 
using namespace std;
 
int main()
{
 
    int sum=0;
    string s;
    for(int i=0;i<8;i++)
    {

        cin>>s;

        for(int j=0;j<s.length();j++)
        {
            if(s[j]=='.' || s[j]=='K' || s[j]=='k')
                continue;
            else
            {
                switch(s[j])
                {
                    case 'Q':sum+=9;
                            break;
                    case 'R':sum+=5;
                            break;
                    case 'P':sum+=1;
                            break;
                    case 'B':sum+=3;
                            break;
                    case 'N':sum+=3;
                            break;
                    case 'q':sum-=9;
                            break;
                    case 'r':sum-=5;
                            break;
                    case 'p':sum-=1;
                            break;
                    case 'b':sum-=3;
                            break;
                    case 'n':sum-=3;
                            break;
                    
                }
            }
            
        }
    
    }

    if(sum>0)
        cout<<"White";
    else if(sum<0)
        cout<<"Black";
    else
        cout<<"Draw";
    
    return 0;
}