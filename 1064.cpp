#include <iostream>
#include <stdio.h>
using namespace std;
 
int main() {
 
    float n, sum = 0;
    int c=0;
    for(int i=0; i<6; i++)
    {
        cin>>n;
        if(n >0){
            c++;
            sum += n;
        }
    }
    cout<<c<<" valores positivos"<<endl;
    printf("%.1f\n", (sum/c));
     
 
    return 0;
}
