#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int A_len,B_len,i,min_len=100,index=-1,mark=0,len_of_window,count=0;
    string A,B;

    cout<<"Enter the string: ";
    getline(cin, A);
    cout<<"Enter the charcters to be present: ";
    getline(cin,B);

    A_len=A.length();
    B_len=B.length();

    if(A_len<B_len)
    {
        cout<<"No such window";
        exit(0);
    }

    int A_count[256]={0};
    int B_count[256]={0};

    for(i=0;i<B_len;i++)
        B_count[B[i]]++;
    
    for(i=0;i<A_len;i++)
    {
        A_count[A[i]]++;
        
        if(B_count[A[i]]!=0 && A_count[A[i]]<=B_count[A[i]])
            count++;

        if(count==B_len)
        {
            while(A_count[A[mark]]>B_count[A[mark]] || B_count[A[mark]]==0)
            {
                if(A_count[A[mark]]>B_count[A[mark]])
                    A_count[A[mark]]--;

                mark++;
            }

            len_of_window=i-mark+1;
            if(min_len>len_of_window)
            {
                min_len=len_of_window;
                index=mark;
            }
        }    
    }

    if(index==-1)
    {
        cout<<"No such window";
        exit(0);
    }

    cout<<"Smallest window is: "<<A.substr(index,min_len);
    return 0;
}