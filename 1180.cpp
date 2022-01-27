#include<bits/stdc++.h>
using namespace std;
int main(){
    int N, num;
    cin>>N;
    int X[N];
    for(int i = 0; i < N; i++){
        cin>>X[i];
    }
    int small = X[0], pos = 0;
    for(int i = 1; i < N; i++){
        if(X[i] < small){
            small = X[i];
            pos = i;
        }
    }
    cout<<"Menor valor: "<<small<<"\n";
    cout<<"Posicao: "<<pos<<"\n";
}
