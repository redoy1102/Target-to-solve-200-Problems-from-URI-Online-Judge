#include<iostream>
using namespace std;
int main(){
    double N;
    cin>>N;
    cout<<"NOTAS:"<<endl;

    int n100 = (N / 100);   
    cout<<n100<<" nota(s) de R$ 100.00"<<endl;
    N -= (n100*100);   
    
    int n50 = (N / 50);   
    cout<<n50<<" nota(s) de R$ 50.00"<<endl;
    N -= (n50*50); 

    int n20 = (N / 20);   
    cout<<n20<<" nota(s) de R$ 20.00"<<endl;
    N -= (n20*20); 
    
    int n10 = (N / 10); 
    cout<<n10<<" nota(s) de R$ 10.00"<<endl;
    N -= (n10*10);  

    int n5 = (N / 5); 
    cout<<n5<<" nota(s) de R$ 5.00"<<endl;
    N -= (n5*5); 
    
    int n2 = (N / 2); 
    cout<<n2<<" nota(s) de R$ 2.00"<<endl;
    N -= (n2*2);

    cout<<"MOEDAS:"<<endl;
    int n1 = (N / 1.00);
    cout<<n1<<" moeda(s) de R$ 1.00"<<endl;
    N -= (n1*1);

    int n50p = (N / 0.50);
    cout<<n50p<<" moeda(s) de R$ 0.50"<<endl;
    N -= (n50p*0.50);

    int n25p = (N / 0.25); 
    cout<<n25p<<" moeda(s) de R$ 0.25"<<endl;
    N -= (n25p*0.25); 

    int n10p = (N / 0.10);
    cout<<n10p<<" moeda(s) de R$ 0.10"<<endl;
    N -= (n10p*0.10);

    int n05p = (N / 0.05);
    cout<<n05p<<" moeda(s) de R$ 0.05"<<endl;
    N -= (n05p*0.05);

    int n01p = (N / 0.01);
    cout<<n01p<<" moeda(s) de R$ 0.01"<<endl;
    N -= (n01p * 0.01);
    return 0;
}