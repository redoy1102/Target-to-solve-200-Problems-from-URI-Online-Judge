#include<bits/stdc++.h>
using namespace std;
int main(){
    int X[10], x;
    for(int i = 0; i < 10; i++){
        cin>>x;
        if(x == 0 || x < 0){
            X[i] = 1;
        }
        else{
            X[i] = x;
        }
    }
    for(int i = 0; i < 10; i++){
        cout<<"X["<<i<<"] = "<<X[i]<<"\n";
    }
    return 0;
}
