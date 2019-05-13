//세변의 길이를 입력받고 triangle의 종류를 출력
#include <iostream>

using namespace std;

void test(int a, int b, int c);

int main()
{
    int t;
    cin >> t;

    int a,b,c;

    for(int i=0; i<t; i++)
    {
        cin >> a >> b >> c;
        test(a,b,c);
        cout << endl;
    }

    return 0;
}
void test(int a, int b, int c)
{
    if(a + b <= c)
    {
        cout <<  0;
    }

    else if( a==b && a==c)
    {
        cout <<  1;
    }

    else if( (a*a + b*b) == c*c)
    {
        cout <<  2;
    }

    else if( (a==b && a != c) || (b==c && b != a))
    {
        cout <<  3;
    }

    else cout << 4;
}