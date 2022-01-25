#include<iostream>
using namespace std;
int main(){
    int N[1000], T, c = 0;
    cin>>T;

    for(int i = 0; i < 1000; i++, c++){
        N[i] = c;

        if(c == (T-1)){
            c = -1;
        }
    }
    for(int i = 0; i < 1000; i++){
        cout<<"N["<<i<<"] = "<<N[i]<<endl;
    }
}
