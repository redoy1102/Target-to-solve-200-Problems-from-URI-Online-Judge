
#include<iostream>
using namespace std;
int main(){
    int X, Y;
    cin>>X>>Y;
    if(X < Y){
                for(int i = 1; i < Y; i++){
                        cout<<i;

                        if(i % X == 0){
                            cout<<endl;
                        }
                        else{
                            cout<<" ";
                        }
                }
                cout<<Y<<endl;
    }
    return 0;
}
