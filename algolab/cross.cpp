//두개의 선분이 교차하는지 검사
#include <iostream>

using namespace std;

void line(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);

int main()
{
    int t;
    int x1,y1,x2,y2,x3,y3,x4,y4;

    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;  
        cin >> x3 >> y3 >> x4 >> y4;
        line(x1,y1,x2,y2,x3,y3,x4,y4);
        cout << endl;
    }

    return 0;
}

void line(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
//첫번째 직선이 수평인 경우
    if(y1 == y2)
    {
        if(x1 < x2)
        {
            if(y3 < y4)
            {
                if((x3 <= x2 && x3 >= x1) && (y1 <= y4 && y1 >= y3))
                {
                    if((y1 == y3 || y1 == y4) || (x3 == x1 || x3 == x2))
                    {
                        cout << 2;
                    }

                    else
                    {
                        cout << 1;
                    }
                    
                }

                else cout << 0;
            }

            else
            {
                if((x3 <= x2 && x3 >= x1) && (y1 <= y3 && y1 >= y4))
                {
                    if((y1 == y3 || y1 == y4) || (x3 == x1 || x3 == x2))
                    {
                        cout << 2;
                    }

                    else
                    {
                        cout << 1;
                    }
                    
                }

                else
                {
                    cout << 0;
                }
                
            }
            
        }

        else
        {
            if(y3 < y4)
            {
                if((x3 <= x1 && x3 >= x2) && (y1 <= y4 && y1 >= y3))
                {
                    if((y1 == y3 || y1 == y4) || (x3 == x1 || x3 == x2))
                    {
                        cout << 2;
                    }

                    else
                    {
                        cout << 1;
                    }
                    
                }

                else cout << 0;
            }

            else
            {
                if((x3 <= x1 && x3 >= x2) && (y1 <= y3 && y1 >= y4))
                {
                    if((y1 == y3 || y1 == y4) || (x3 == x1 || x3 == x2))
                    {
                        cout << 2;
                    }

                    else
                    {
                        cout << 1;
                    }
                    
                }

                else
                {
                    cout << 0;
                }
                
            }
        }
        
    }
//첫번째 직선이 수직인 경우
    else
    {
        if(x3 < x4)
        {
            if(y1 < y2)
            {
                if((x1 <= x4 && x3 >= x3) && (y3 <= y2 && y3 >= y1))
                {
                    if((y3 == y1 || y3 == y2) || (x1 == x3 || x1 == x4))
                    {
                        cout << 2;
                    }

                    else
                    {
                        cout << 1;
                    }
                    
                }

                else cout << 0;
            }

            else
            {
                if((x1 <= x4 && x1 >= x3) && (y3 <= y1 && y3 >= y2))
                {
                    if((y3 == y1 || y3 == y2) || (x1 == x3 || x1 == x4))
                    {
                        cout << 2;
                    }

                    else
                    {
                        cout << 1;
                    }
                    
                }

                else
                {
                    cout << 0;
                }
                
            }
            
        }

        else
        {
            if(y1 < y2)
            {
                if((x1 <= x3 && x1 >= x4) && (y3 <= y2 && y3 >= y1))
                {
                    if((y3 == y1 || y3 == y2) || (x1 == x3 || x1 == x4))
                    {
                        cout << 2;
                    }

                    else
                    {
                        cout << 1;
                    }
                    
                }

                else cout << 0;
            }

            else
            {
                if((x1 <= x3 && x1 >= x4) && (y3 <= y1 && y3 >= y2))
                {
                    if((y3 == y1 || y3 == y2) || (x1 == x3 || x1 == x4))
                    {
                        cout << 2;
                    }

                    else
                    {
                        cout << 1;
                    }
                    
                }

                else
                {
                    cout << 0;
                }
                
            }
        }
    }
    
}