#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int en, hn;
    float s;
    cin>>en>>hn>>s;

    cout<<"NUMBER = "<<en<<endl;
    cout<<"SALARY = U$ " << fixed << setprecision(2) << (hn*s) <<endl;
    return 0;
}