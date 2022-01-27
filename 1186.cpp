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
    for(int k = 11; k >= 1; k--){
        for(int l = 12-k; l < 12 ; l++){
            sum += M[l][k];
            c++;
        }
    }
    if(O == 'S'){
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
    else if(O == 'M'){
        cout<<fixed<<setprecision(1)<<(sum/c)<<endl;
    }
    return 0;
}
