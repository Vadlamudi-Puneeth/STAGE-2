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

int main(){
    int a,b;
    printhi();
    a = 4;
    b = 6;
    int d = sum(a,b);
    d = 75;
cout<<"The sum is equal to"<<d<<" "<<"The value of a is: "<<a;
    return 0;
}