#include<bits/stdc++.h>
using namespace std;
int main(){
    int i = 1, j = 7;

    for(i; i <= 9; i += 2){
        cout<<"I="<<i<<" "<<"J="<<j<<endl; //1 7

        cout<<"I="<<i<<" "<<"J="<<(j = j - 1)<<endl; //1 6

        cout<<"I="<<i<<" "<<"J="<<(j = j - 1)<<endl; // 1 5
        
        j += 4;
    }

    return 0;
}
