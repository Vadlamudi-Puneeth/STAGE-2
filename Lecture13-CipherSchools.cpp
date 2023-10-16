#include <iostream>
using namespace std;

int main(){
    int a[100];
    int *x = a;
    int a[5];
    int *x;
    x=&a[0];
    for(int i = 0;i<6;++i){
        cout<<a[i]<<endl;
    }

    return 0;
}