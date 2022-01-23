#include<bits/stdc++.h>
using namespace std;
int main(){
    double A[100], x;

    for(int i = 0; i < 100; i++){
        cin>>x;
        if((x < 10) || (x == 10)){
            A[i] = x;
            cout<<"A["<<i<<"] = "<<fixed<<setprecision(1)<<A[i]<<endl;
        }
    }
    return 0;
}
