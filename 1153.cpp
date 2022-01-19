#include<iostream>
using namespace std;
int main(){
    int N, sum = 1;
    cin>>N;

    for(N; N >= 1; N--){
        sum *= N;
    }
    cout<<sum<<endl;
    return 0;
}
