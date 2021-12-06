#include<iostream>
using namespace std;
int main(){
    int A, B, C, temp, d, e, f;
    cin>>A>>B>>C;
    d = A;
    e = B;
    f = C;

    if(A > B){
        temp = A;
        A = B;
        B = temp;
    }
    if(A > C){
        temp = A;
        A = C;
        C = temp;
    }
    if(B > C){
        temp = B;
        B = C;
        C = temp;
    }
    cout<<A<<endl<<B<<endl<<C<<endl<<endl;
    cout<<d<<endl<<e<<endl<<f<<endl;

    return 0;
}