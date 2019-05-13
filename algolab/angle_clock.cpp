#include <iostream>
using namespace std;

int angleClock(int h, int m);

int main()
{
    int t;
    int h,m;

    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>h>>m;
        cout<<angleClock(h,m)<<endl;

    }

    return 0;
}

int angleClock(int h, int m)
{
    
    double angle = 6*m - (h*30 + 0.5*m);

    if(angle>180)
        {
            return 360 - angle;
        }
    
    if(angle<0 && angle>-180)
        {
            return - angle;
        }

    if(angle<-180)
        {
            return 360 + angle;
        }

        return (int) angle;
}   