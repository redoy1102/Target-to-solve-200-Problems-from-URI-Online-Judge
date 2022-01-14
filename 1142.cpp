#include<iostream>
using namespace std;
int main(){
    int n, b, c=1, d=4;
    cin>>n;
    for(int i = 0; i < n; i++){
        for(b = c; b <= d; b++){
            if(b %4 == 0){
                cout<<"PUM"<<endl;
            }
            else{
                cout<<b<<" ";
            }
        }
        c+=4; d+=4;
    }
    return 0;
}


