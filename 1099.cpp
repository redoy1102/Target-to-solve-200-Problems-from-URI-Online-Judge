#include <iostream>

using namespace std;

int main() {

    int N, X, Y, sum = 0;
    cin>>N;
    for(int i= 0; i < N; i++){
        cin>>X>>Y;
        if(X > Y){
            for(int j = X-1; j > Y;  j--){
            if(j %2 != 0){
                sum += j;
            }
        }
        cout<<sum<<endl;
        sum = 0;
        }
        else if(Y > X){
            for(int j = Y-1; j > X;  j--){
            if(j %2 != 0){
                sum += j;
            }
        }
        cout<<sum<<endl;
        sum = 0;
        }
        else{
            cout<<sum<<endl;
        }

    }

    return 0;
}
