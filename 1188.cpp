#include<bits/stdc++.h>
using namespace std;
int main(){
    char O;
    double M[12][12], sum = 0, c=0;
    cin>>O;

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin>>M[i][j];
        }
    }
    for(int k = 11, m = 0; k >= 7; k--, m++){
        for(int l = (1+m); l < (11-m); l++){
            sum += M[k][l];
            c++;
        }
    }
    if(O == 'S'){
        cout<<fixed<<setprecision(1)<<sum<<"\n";
    }
    else if(O == 'M'){
        cout<<fixed<<setprecision(1)<<(sum/c)<<"\n";
    }
    return 0;
}
//m[11][1]
//m[11][2]
//m[11][3]
//m[11][4]
//m[11][10]

//!m[10][2]
//!m[10][3]
//!m[10][9]
