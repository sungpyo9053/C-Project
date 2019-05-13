#include <iostream> 

#include <stdio.h>

#include <math.h>

using namespace std;

void find(int x1,int y1,int x2,int y2,int x3,int y3);

int main()

{

    int t;

    int x1,x2,y1,y2;

    int x3,y3;

    cin >> t;

    for(int i=0; i<t; i++)

    {

        cin >> x1>>y1>>x2>>y2;

        cin >> x3>>y3;

        find(x1,y1,x2,y2,x3,y3);

    }

    return 0;

}

void find(int x1,int y1,int x2,int y2,int x3,int y3) {

    double l1,l2,l3;

    double sl1,sl2,sl3;

    int answer = 0;

    l1 = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);

    l2 = (x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);

    l3 = (x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);

    double list[] = {l1,l2,l3};

    double temp;

    for(int i=0;i<3;i++){

        for(int j=0;j<2;j++){

            if(list[j] < list[j+1]){

                temp = list[j];

                list[j] = list[j+1];

                list[j+1] = temp;

            }

        }

    }

    sl1=sqrt(list[0]);

    sl2=sqrt(list[1]);

    sl3=sqrt(list[2]);

    double slist[] = {sl1,sl2,sl3};

    if(true){

        if(list[0]>list[1]+list[2]){

            answer = 2;

        }

        else if(list[0]==list[1]+list[2]){

            answer = 1;

        }

        else if(list[0]<list[1]+list[2]){

            answer = 3;

        }

        if(sl1>=sl2+sl3){

            answer = 0;

        }

    }

    cout << answer << endl;

}