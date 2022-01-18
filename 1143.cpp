#include<iostream>
using namespace std;
int main()
{
    int N, j = 1;
    cin>>N;
    if(N >= 1 && N <= 1000){
        for(int i = 1; i <= N; i++){
        cout<<i<<" ";
        int res = (j * i);
        cout<<res<<" ";
        cout<<(res * i)<<endl;
        j++;
    }
    }
    return 0;
}
