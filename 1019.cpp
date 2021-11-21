#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    
    int h = N / 3600;
    N -= (h * 3600);

    int m = N / 60;
    N -= (m * 60);

    cout<<h<<":"<<m<<":"<<N<<endl;
    return 0;
}