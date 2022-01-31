#include<bits/stdc++.h>
using namespace std;
int main(){
    float n, sum = 0, c = 0;
    while(1){
        cin>>n;
        if((n < 0) || (n > 10)){
            cout<<"nota invalida"<<endl;
        }
        else{
            sum += n;
            c++;
        }
        
        if(c == 2){
            cout<<fixed<<setprecision(2)<<"media = "<<(sum / 2)<<endl;
            break;
        }
        
    }
}
