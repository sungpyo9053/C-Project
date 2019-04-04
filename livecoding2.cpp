#include <iostream>

using namespace std;
int t;
int a;
int b;
int h;
int number[10];
int c;
int operator1(int h);
int main(){

    cin >> t;
    for(int i=0; i<t; i++){
        cin >>h;
        cout<< operator1(h)<<endl;
    }
    return 0;
}

int operator1(int h){
   int sum;
    for(int i = 0; i<h; i++){
        cin >>a;
        number[i] = a;
        // cout<<number[i]<<endl;
        sum+=a;
    }
    sum=(sum/2)+1;
    // cout << sum <<endl;
    for(int i = 0; i<h; i++){
        if (sum <= number[i]){
            return i+1;
        } 
        
    }
    for (int i = 0; i<h; i++){
        if (sum > number[i]){
            return 0;
        }
}
}
