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
            sum += M[l][k];
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
//m[1][11]
//m[2][11]
//m[3][11]
//m[4][11]
//m[10][11]

//!m[2][10]
//!m[3][10]
//!m[4][10]
//!m[9][10]
