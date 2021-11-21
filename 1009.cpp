#include<iostream>
#include<iomanip>

using namespace std;
int main(){
    string name;
    double fixeds, totalS;
    cin>>name;
    cin>>fixeds>>totalS;

    double total = fixeds + (totalS * 0.15);

    cout<<fixed<<setprecision(2)<< "TOTAL = R$ "<<total<<endl;
    return 0;
}