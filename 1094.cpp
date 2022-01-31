#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float N, Amount, sum = 0, csum=0, rsum=0,ssum=0;
    char ch;
    cin>>N;
    for(int i = 0; i < N; i++){
        cin>>Amount>>ch;
        sum += Amount;
        if(ch == 'C' || ch == 'R' || ch == 'S')
        {
            if(ch == 'C'){
                csum += Amount;
            }
            else if(ch == 'R'){
                rsum += Amount;
            }
            else if(ch == 'S'){
                ssum += Amount;
            }
        }
    }
    cout<<"Total: "<<sum<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<csum<<endl;
    cout<<"Total de ratos: "<<rsum<<endl;
    cout<<"Total de sapos: "<<ssum<<endl;
    //cout<<csum<<endl;
    float perc = (csum/sum)*100;
    float perr = (rsum/sum)*100;
    float pers = (ssum/sum)*100;
    cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<perc<<" %"<<endl;

    cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<perr<<" %"<<endl;

    cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<pers<<" %"<<endl;

    return 0;

}