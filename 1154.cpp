#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float age, sum = 0, c=0;
    while(1){
        cin>>age;

        if(age < 0){
            break;
        }
        else{
            sum += age;
        }
        c++;
    }
    float avr = (sum / c);
    cout<<fixed<<setprecision(2)<<avr<<endl;
    return 0;
}
