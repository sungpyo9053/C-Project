//숫자 triangle 출력하기
#include <iostream>

using namespace std;

void triangle(int k);

int main()
{
    int t;  //test case
    int k;  

    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >> k;
        triangle(k);
    }

    return 0;
}

void triangle(int k)
{

    for(int i=1; i<=k; i++)
    {
        int sum = i;

        cout << i << " ";

        for(int j=1; j<i; j++)
        {
            sum += k-j;
            cout << sum << " ";
        }

        cout << endl;
    }
}