#include<stdio.h>
#include <iostream>
 
using namespace std;
 
int main() {
    double A, B, MEDIA;
    cin>>A>>B;

    MEDIA = ((A*3.5) + (B*7.5)) / 11;

    printf("MEDIA = %.5lf\n",MEDIA);
    
    return 0;
}

//sol