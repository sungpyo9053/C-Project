#include <iostream>
using namespace std;

int closestNumber(int n, int m);

int main(void)
{
    int t;
    int n,m;

    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>n>>m;
        cout<<closestNumber(n,m)<<endl;
    }

    return 0;
}

int closestNumber(int n, int m)
{
    int  hi, lo;
    int i,j;
    //바로 나눠질 때
    
    if(n%m==0)
    {
        return n;
    }
    
    //바로 안나눠질 때
    
    if(n%m!=0)
    {
        for(i=0;i<n;i++)
        {
            n++;
            if(n%m==0)
            {
                hi=n;
                break;
            }
        }

        for(j=0;j<n;j++)
        {
            n--;
            if(n%m==0)
            {
                lo=n;
                break;
            }
        }
    }
       
        if(i>j)
        {
            return lo;
        }
        
        if(i<j)
        {
            return hi;
        }

        if(i==j)
        {
            if(hi>=0)
            {
                return hi;
            }

            return lo;
        }



}