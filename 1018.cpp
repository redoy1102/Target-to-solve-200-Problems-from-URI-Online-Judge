#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int N;
    cin>>N;     

        cout<<N<<endl;
        int n100 = N / 100; 
        cout<<n100<<" nota(s) de R$ 100,00"<<endl;  
        N -= (n100*100); 

        int n50 = N / 50; 
        cout<<n50<<" nota(s) de R$ 50,00"<<endl;
        N -= (n50*50);  
        
        int n20 = N / 20; 
        cout<<n20<<" nota(s) de R$ 20,00"<<endl;
        N -= (n20*20);  

        int n10 = N / 10; 
        cout<<n10<<" nota(s) de R$ 10,00"<<endl;
        N -= (n10*10);   

        int n5 = N / 5; 
        cout<<n5<<" nota(s) de R$ 5,00"<<endl;
        N -= (n5*5);   

        int n2 = N / 2; 
        cout<<n2<<" nota(s) de R$ 2,00"<<endl;
        N -= (n2*2);   

        int n1 = N / 1; 
        cout<<n1<<" nota(s) de R$ 1,00"<<endl;
        N -= (n2*1); 
    return 0;
}