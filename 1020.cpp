#include<iostream>
using namespace std;
int main(){
    int td;
    cin>>td;

    int y = td / 365;
    td -= (y*365);

    int m = td / 30;
    td -= (m*30);

    cout<<y<<" ano(s)"<<endl;
    cout<<m<<" mes(es)"<<endl;
    cout<<td<<" dia(s)"<<endl;
    
    return 0;
}