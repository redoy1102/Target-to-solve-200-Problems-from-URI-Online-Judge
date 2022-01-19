#include<iostream>
using namespace std;
int main(){
    int N, d1 = 0, d2 = 1;
    cin>>N;
  
    cout<<d1<<" "<<d2<<" ";
    int fibo = d1 + d2;
  
    for(int i = 3; i <= N; i++){
        if(i != N){
            cout<<fibo<<" ";
        }
        else{
            cout<<fibo;
        }
        d1 = d2;
        d2 = fibo;
        fibo = d1 + d2;
    }
  
    cout<<endl;
    return 0;
}
