#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    double A, B, C;
    cin>>A>>B>>C;

    double pr1 = (B*B) - 4*A*C;

    if ( (pr1 > 0) && (A != 0) )
    {
        double sqr = sqrt(pr1);
        double R1 = (-B + sqr) / (2*A);
        double R2 = (-B - sqr) / (2*A);
        cout<<"R1 = "<<fixed<<setprecision(5)<<R1<<endl;
        cout<<"R2 = "<<fixed<<setprecision(5)<<R2<<endl;
    }
    else{
        cout<<"Impossivel calcular"<<endl;
    }
    return 0;
}