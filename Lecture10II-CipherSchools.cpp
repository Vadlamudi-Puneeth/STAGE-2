#include <iostream>
using namespace std;

void printhi(){
    cout<<"Hi";
    cout<<endl;
    return ;
}

int sum(int a,int b){
    int c = a+b;
    a = 400;
    return c;
    cout<<c;
}

// void swap(int a,int b){
//     int c=b;
//     b=a;
//     a=c;
// }

void swap(int &a,int &b){
    int c=b;
    b=a;
    a=c;
}

int fun(int &a,int &b){
    a = 99999;
    b = 99999;
    cout<<"Values in fun"<<a<<" "<<b;
}

int main(){
    int a,b;
    printhi();
    a = 4;
    b = 6;
    int d = sum(a,b);
    d = 75;
cout<<"The sum is equal to"<<d<<" "<<"The value of a is: "<<a;
    swap(a,b);
    cout<<"After swapping";
    cout<<a<<b;
    return 0;
}