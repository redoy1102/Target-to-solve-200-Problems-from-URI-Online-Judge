#include<stdio.h>
#include <iostream>
 
using namespace std;
 
int main() {
    float A, B, C, MEDIA;
    cin>>A>>B>>C;

    MEDIA = ((A*2) + (B*3) + (C*5)) / 10;

    printf("MEDIA = %.1f\n",MEDIA);
    
    return 0;
}

//solved