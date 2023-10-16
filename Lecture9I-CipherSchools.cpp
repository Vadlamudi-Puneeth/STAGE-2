#include <iostream>
using namespace std;

// int compare(int a,int b){
//     int c;
//     if(a > b){
//         c = a;
//     }
//     else{
//         c = b;
//     }
//     return c;
// }

// int compare(int a,int b){
//     if(a == 5){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

int sum(int a,int b){
    int c = a+b;
    return c;
}

int main(){
    int a = 3,b = 5;
    int c;
    
    c = sum(a,b);
    cout<<c;
}