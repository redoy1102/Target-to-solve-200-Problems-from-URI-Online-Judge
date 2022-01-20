#include<bits/stdc++.h>
using namespace std;
int main(){
    int N, X, Y, sum = 0, C = 1;
    cin>>N;
    for(int i = 1; i <= N; i++){
        cin>>X>>Y;
        if(X %2 == 0){
            X++;
            for(int j = 0; j < Y; j++, X+=2){
                sum += X;
            }
        }
        else if(X %2 != 0){
            for(int k = 0; k < Y; k++, X+=2){
                sum += X;
            }
        }
        cout<<sum<<"\n";
        sum = 0;
    }
    return 0;
}
