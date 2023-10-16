#include <iostream>
using namespace std;

int main(){
    int a,b;
    int *p,*q;

    p = &a;
    a = 1;
    q=&b;
    int c = *p+*q;
    cout<<"The value of a is (from the actual variable type)"<<a<<endl;
    cout<<"The value of pointer from using *(asterix,indirection operator) "<<*p<<endl;
    cout<<c;
    cout<<"The address of a is : "<<&a<<"or"<<*p;

    return 0;
}