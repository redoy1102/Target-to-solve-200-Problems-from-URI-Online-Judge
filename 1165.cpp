#include<bits/stdc++.h>
using namespace std;
int main(){
    int N, X, c=0;
    cin>>N;
    for(int i = 0; i < N; i++){
        cin>>X;
        for(int i = 1; i <= X; i++){
            if(X % i == 0){
                c++;
            }
        }
        if(c == 2){
            cout<<X<<" eh primo"<<endl;
        }
        else{
            cout<<X<<" nao eh primo"<<endl;
        }
        c=0;
    }

    return 0;
}
