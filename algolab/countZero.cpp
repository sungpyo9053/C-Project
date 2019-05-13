//정수들의 곱의 결과의 끝자리 0의 개수를 구하는 프로그램.
#include <iostream>

using namespace std;

int count2(int num);
int count5(int num);

int main()
{
    int t;
    int n;
    int k;


    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>n;

        int sum2=0;
        int sum5=0;

        for(int j=0;j<n;j++)
        {
           
            cin>>k;
            sum2 += count2(k);
            sum5 += count5(k);
            
        }
        
        if(sum2 >= sum5)
        {
            cout<<sum5<<endl;
        }

        else
        {
            cout<<sum2<<endl;
        }

    }


    return 0;

}

int count2(int num)
{
    int c2=0;
    int n2 = num;

    if(num%2 != 0)
    {
        return 0;
    }

    while(n2%2==0)
    {
        c2++;
        n2 /= 2;
    }

    return c2;
}

int count5(int num)
{
    int c5=0;
    int n5 = num;

    if(num%5 != 0)
    {
        return 0;
    }
    
    while(n5%5==0)
    {
        c5++;
        n5 /= 5;
    }

    return c5;
    
}
