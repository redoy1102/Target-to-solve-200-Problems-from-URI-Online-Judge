#include<iostream>
using namespace std;
int main(){
    double A, B, C, temp;
    cin>>A>>B>>C;

    if(A < B){
        temp = A;
        A = B;
        B = temp;
    }
    if(A < C){
        temp = A;
        A = C;
        C = temp;
    }
    if(B < C){
        temp = B;
        B = C;
        C = temp;
    }
    
    switch(A, B, C){
        case (A >= (B + C)):
        cout<<"NAO FORMA TRIANGULO"<<endl;

        case ((A*A) == (B*B) + (C*C)):
        cout<<"TRIANGULO RETANGULO"<<endl;

        case ((A*A) > (B*B) + (C*C)):
        cout<<"TRIANGULO OBTUSANGULO"<<endl;

        case ((A != (B == C)) || (B != (A == C)) || (C != (A == B))):
        cout<<"TRIANGULO ISOSCELES"<<endl;

        case ((A*A) < (B*B) + (C*C)):
        cout<<"TRIANGULO ACUTANGULO"<<endl;

        case A != (B == C)) || (B != (A == C)) || (C != (A == B)):
        cout<<"TRIANGULO ISOSCELES"<<endl;

        case (A == B == C):
        cout<<"TRIANGULO EQUILATERO"<<endl;

        case (A == B == C):
        cout<<"TRIANGULO EQUILATERO"<<endl;

        case ((A != (B == C)) || (B != (A == C)) || (C != (A == B))):
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }


    }

    return 0;
}