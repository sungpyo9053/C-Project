#include <iostream>

using namespace std;

int isLeapYear(int year);
int operator1(int year,int month, int day);
int month1[] ={31,28,31,30,31,30,31,31,30,31,30,31};
int month2[] ={31,29,31,30,31,30,31,31,30,31,30,31};

int main(){
int t;
int year;
int month;
int day;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> year >> month >>day;
        cout<< operator1(year,month,day)<<endl;
    }
    return 0;
}

int isLeapYear(int year)
{
    if((year%4==0) && (year%100 !=0) || (year%400 ==0)){
        return 1;
    }
    else
    
        return 0;
    }

int operator1(int year, int month, int day){
    int sum =0;
    if (!isLeapYear(year)){
        for(int j =0; j<month; j++){
             sum += month1[j-1];
        }
    }
    else{
        for(int i =0; i<month; i++){
            sum += month2[i-1];
            
        }
    }
    // cout<<day<<endl; 
 return sum+day;

}
