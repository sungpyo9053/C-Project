#include <iostream>
using namespace std;

void outputPyramid(int n, int k);
//k+(n-i)
int main()
{
    int t;
    int n,k;

    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>n>>k;
        outputPyramid(n,k);
    }

    return 0;
}

void outputPyramid(int n, int k)
{
    cout<<k;
    
    int m=n-1;
    int l=k;

    for(int i=1;i<k;i++)
    {
        cout<<"*"<<l+m;
        
        l += m;
        m--;
         
    }   
    cout<<""<<endl;
}