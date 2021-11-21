#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int time, speed;
    cin>>time>>speed;

    int td = (time * speed);

    float res = (1.0 / 12) * (float)td;
    
    cout<<fixed<<setprecision(3)<<res<<endl;
    return 0;
}