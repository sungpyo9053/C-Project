#include <iostream>
using namespace std;

void outputZigZag(int n, int k);

int main(void)
{
    int t;
    int n,k;

    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>n>>k;
        outputZigZag(n,k);
    }

    return 0;
}

void outputZigZag(int n, int k)
{
    int sp = 1;
    int m = 1;

    for(int i=0;i<k;i++)
    {
        sp = sp + m-1;
        m++;
    }

//홀수 줄
    if(k%2 != 0)
    {
        cout<<sp;
        
        for(int i=1;i<k;i++)
        {
            sp++;
            cout<<"*"<<sp;
        } 

        cout<<""<<endl;
    }

//짝수 줄
    if(k%2 ==0)
    {
        sp = sp+(k-1);
        cout<<sp;

        for(int i=1;i<k;i++)
        {
            sp--;
            cout<<"*"<<sp;
        }    

        cout<<""<<endl;
    }

}