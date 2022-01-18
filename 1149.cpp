#include<iostream>
using namespace std;

int main()
{
    int A, N, sum = 0;
    cin>>A;
    while(1){
        cin>>N;
        if(N > 0 && N != 0){
            for(int i = 1; i <= N; i++){
                sum += A;
                A++;
            }
            cout<<sum<<endl;
            break;
        }
    }
    return 0;
}
