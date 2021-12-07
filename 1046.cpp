#include<iostream>
using namespace std;
int main(){
    int st, et, X = 0;
    cin>>st>>et;
    
    if(st >= 12 && et <= 12){
        int nst = 24-st;
        X = nst + et;
    }
    else if(st == et){
        X = 24;
    }
    else if(st < 12 && et >= 12){
        int nst = 24-st;
        int net = 24-et;
        X = nst - net;
    }

    if(X <= 24){
        cout<<"O JOGO DUROU "<<X<<" HORA(S)"<<endl;
    }

    return 0;
}