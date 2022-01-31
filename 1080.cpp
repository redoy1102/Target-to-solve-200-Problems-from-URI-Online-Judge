#include<iostream>
using namespace std;
int main(){
    int num[100], pos = 0;
    for(int i = 0; i < 100; i++){
        cin>>num[i];
    }

    int max = num[0];
    for(int i = 1; i < 100; i++){
        if(num[i] > max){
            max = num[i];
            pos = (i+1);
        }
    }
    cout<<max<<endl;
    cout<<pos<<endl;
    return 0;
}