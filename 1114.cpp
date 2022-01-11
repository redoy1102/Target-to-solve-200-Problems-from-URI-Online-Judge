#include<iostream>
using namespace std;

void m(){
    int pass;
    cin>>pass;
    if(pass == 2002){
        cout<<"Acesso Permitido"<<endl;
    }
    else{
        cout<<"Senha Invalida"<<endl;
        m();
    }
}

int main(){
    m();
    return 0;
}
