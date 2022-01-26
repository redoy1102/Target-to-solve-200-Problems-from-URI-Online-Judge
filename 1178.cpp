#include<bits/stdc++.h>
using namespace std;
int main(){
    double X, N[100];
    cin>>X;
    N[0] = X;
    for(int i = 1; i < 100; i++){
        X /= 2;
        N[i] = X;
    }
    for(int j = 0; j < 100; j++){
        cout<<fixed<<setprecision(4)<<"N["<<j<<"] = "<<N[j]<<endl;
    }

    return 0;
}
