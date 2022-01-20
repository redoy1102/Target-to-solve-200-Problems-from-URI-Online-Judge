#include<bits/stdc++.h>
using namespace std;
int main(){
    int X, sum = 0;
    while(1){
        cin>>X;
        if(X == 0){
            break;
        }
        else if(X %2 == 0){
            for(int i = 0; i < 5; i++, X += 2){
                sum += X;
            }
        }
        else if(X %2 != 0){
            X++;
            for(int i = 0; i < 5; i++, X += 2){
                sum += X;
            }
        }
        cout<<sum<<"\n";
        sum = 0;
    }
    return 0;
}
