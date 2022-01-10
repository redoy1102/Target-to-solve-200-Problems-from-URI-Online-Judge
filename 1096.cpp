#include<iostream>
using namespace std;
int main(){
    int j = 7, i = 1;

    for(j; j >= 5; --j){
        cout<<"I="<<i<<" J="<<j<<endl;
        if(j == 5){
            j=8;
            i+=2;
            if(i == 11){
                j=4;
            }
        }
    }

    return 0;
}

