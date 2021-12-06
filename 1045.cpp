#include<iostream>
using namespace std;
int main(){
    double A, B, C, temp;
    cin>>A>>B>>C;
    cout<<"Before sort: "<<A<<" "<<B<<" "<<C<<endl<<endl;

    if(A < B){
        temp = A;
        A = B;
        B = temp;
    }
    if(A < C){
        temp = A;
        A = C;
        C = temp;
    }
    if(B < C){
        temp = B;
        B = C;
        C = temp;
    }
    cout<<"After sort: "<<A<<" "<<B<<" "<<C<<endl;

}