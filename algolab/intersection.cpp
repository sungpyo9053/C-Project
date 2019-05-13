//두 구간 사이의 겹치는 길이
#include <iostream>

using namespace std;

int lengthOfIntervalIntersection(int a, int b, int c, int d);

int main()
{
    int t;
    int h,m;
    int a,b,c,d;

    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c>>d;
        cout<<lengthOfIntervalIntersection(a,b,c,d)<<endl;
    }

    return 0;
}

int lengthOfIntervalIntersection(int a, int b, int c, int d)
{
//안겹치는 경우
    if(c>b || a>d)
    {
        return -1;
    }

    if(b==c || a==d)
    {
        return 0;
    }
    
//어느 하나가 완전히 포함
    if(a>=c && b<=d)
    {
        return b-a;
    }

    if(a<=c && b>=d)
    {
        return d-c;
    }

//일정 범위가 겹칠 때
    if(a<=c && b>=c && b<=d)
    {
        return b-c;
    }

    if(a>=c && a<=d && b>=d)
    {
        return d-a;
    }

}
    
