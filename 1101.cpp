#include<bits/stdc++.h>
using namespace std;
int main(){
    int M, N, sum = 0;
    while(1){
        cin>>M>>N;
        if((M < 0) || (M == 0) || (N < 0) || (N == 0)){
            break;
        }
        else{
            if(M < N){
                for(int i = M; i <= N; i++){
                    sum += i;
                    cout<<i<<" ";
                }
                cout<<"Sum="<<sum<<endl;
            }
            else{
                for(int i = N; i <= M; i++){
                    sum += i;
                    cout<<i<<" ";
                }
                cout<<"Sum="<<sum<<endl;
            }
            sum = 0;
        }
    }
}
