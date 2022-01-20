#include<bits/stdc++.h>
using namespace std;
int main(){
    int N[10], V;
    cin>>V;
    for(int i = 0; i < 10; i++){
        N[i] = V;
        V *= 2;
    }
    for(int i = 0; i < 10; i++){
        cout<<"N["<<i<<"] = "<<N[i]<<"\n";
    }
    return 0;
}
