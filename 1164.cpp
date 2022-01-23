#include<bits/stdc++.h>
using namespace std;
int main(){
    int N, sum = 0, X;
    cin>>N;
    for(int i = 0; i < N; i++){
        cin>>X;
        for(int j = 1; j < X; j++){
            if(X % j == 0){
                sum += j;
            }
        }

        if(sum == X){
            cout<<X<<" eh perfeito"<<endl;
        }
        else{
            cout<<X<<" nao eh perfeito"<<endl;
        }
        sum=0;
    }

    return 0;
}
