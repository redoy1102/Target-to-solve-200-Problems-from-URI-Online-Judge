#include<iostream>
using namespace std;

void m(){
    int X, Y;
    cin>>X>>Y;
    if(X > Y){
        cout<<"Decrescente"<<endl;
        m();
    }
    else if(X < Y){
        cout<<"Crescente"<<endl;
        m();
    }
}

int main(){

    m();


    return 0;
}
