//모래시계 출력
#include <iostream>

using namespace std;

void sand(int k);

int main()
{
    int t,k;
    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >> k;
        sand(k);
    }

}

void sand(int k)
{
    for(int i=1; i<=(k/2 + 1); i++)
    {
        for(int j=1; j<i; j++)
        {
            cout << "-";
        }

        cout << "*";

        for(int h=i; h<=(k/2); h++)
        {
            cout << "+*";
        }

        for(int j=1; j<i; j++)
        {
            cout << "-";
        }

        cout << endl;
    }

    for(int i=1; i<=(k/2); i++)
    {
        for(int j=i; j<(k/2); j++)
        {
            cout << "-";
        }

        cout << "*";

        for(int h=1; h<=i; h++) 
        {
            cout << "+*";
        }

        for(int j=i; j<(k/2); j++)
        {
            cout << "-";
        }

        cout << endl;
    }
}