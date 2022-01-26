#include<bits/stdc++.h>
using namespace std;
int main(){
    int par[5], impar[5], e=0, odd=0;
    int n, i = 15;

    while(i--){
        cin>>n;
        if(n %2 == 0){
            par[e] = n;
            e++;
        }
        else{
            impar[odd] = n;
            odd++;
        }
        if(e == 5){
            for(int j = 0; j < 5; j++){
                cout<<"par["<<j<<"] = "<<par[j]<<endl;
            }
            e=0;
        }
        if(odd == 5){
            for(int k = 0; k < 5; k++){
                cout<<"impar["<<k<<"] = "<<impar[k]<<endl;
            }
            odd=0;
        }
        if(i == 0){
            for(int a = 0; a < odd; a++){
                cout<<"impar["<<a<<"] = "<<impar[a]<<endl;
            }
            for(int b = 0; b < e; b++){
                cout<<"par["<<b<<"] = "<<par[b]<<endl;
            }
        }
    }

    return 0;

}
