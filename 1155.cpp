#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    float i=1, S=0;
    for(i; i <=100; i++)
    { 
        S+=1/i;
    }
    cout<<fixed<<setprecision(2)<<S<<endl;
    

    return 0;
}
