#include<bits/stdc++.h>
using namespace std;
int main(){
    int L;
    char T;
    double M[12][12], sum = 0;
    cin>>L>>T;

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin>>M[i][j];
        }
    }
    for(int k = 0; k < 12; k++){
        sum += M[L][k];
    }
    if(T == 'S'){
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
    else if(T == 'M'){
        cout<<fixed<<setprecision(1)<<(sum/12)<<endl;
    }
    return 0;
}

// m[2][0]
// m[2][1]
// m[2][2]
// m[2][3]
// m[2][4]
// m[2][5]
// m[2][6]
// m[2][7]
// m[2][8]
// m[2][9]
// m[2][10]
// m[2][11]
