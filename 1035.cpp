#include<iostream>
using namespace std;
int main(){
    int A, B, C, D;
    cin>>A>>B>>C>>D;

    int scd = C + D;
    int sab = A + B;
    if ((B > C) && (D > A) && (scd > sab) && ((C >= 0) && (D >= 0)) && (A %2 == 0)){
        cout<<"Valores aceitos"<<endl;
    }
    else{
        cout<<"Valores nao aceitos"<<endl;
    }

    return 0;
}