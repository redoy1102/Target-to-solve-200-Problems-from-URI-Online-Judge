#include<iostream>
#include<iomanip>

using namespace std;
int main(){
    float s, rr;
    cin>>s;
    if(s >= 0 && s <= 400.00){
        rr = (s*0.15);
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<(s+rr)<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<rr<<endl;
        cout<<"Em percentual: 15 %"<<endl;
    }
    else if(s >= 400.01 && s <= 800.00){
        rr = (s*0.12);
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<(s+rr)<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<rr<<endl;
        cout<<"Em percentual: 12 %"<<endl;
    }
    else if(s >= 800.01 && s <= 1200.00){
        rr = (s*0.10);
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<(s+rr)<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<rr<<endl;
        cout<<"Em percentual: 10 %"<<endl;
    }
    else if(s >= 1200.01 && s <= 2000.00){
        rr = (s*0.07);
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<(s+rr)<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<rr<<endl;
        cout<<"Em percentual: 7 %"<<endl;
    }
    else{
        rr = (s*0.04);
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<(s+rr)<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<rr<<endl;
        cout<<"Em percentual: 4 %"<<endl;
    }
    return 0;
}