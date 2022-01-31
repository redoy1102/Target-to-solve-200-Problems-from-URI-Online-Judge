#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int N;
    float X, Y, Z, res;
    cin>>N;
    for(int i = 0; i < N; i++){
        cin>>X>>Y>>Z;
        res = ((X*2) + (Y*3) + (Z*5)) / 10;
        cout<<fixed<<setprecision(1)<<res<<endl;
    }

    return 0;
}