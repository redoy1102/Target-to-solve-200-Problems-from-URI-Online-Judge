#include<iostream>
#include<string>

using namespace std;
int main(){
    string n1, n2, n3;
    cin>>n1>>n2>>n3;
    
    if(n1 == "vertebrado"){
        if(n2 == "mamifero"){
            if(n3 == "onivoro"){
                cout<<"homem"<<endl;
            }
            else{
                cout<<"vaca"<<endl;
            }
        }
        if(n2 == "ave"){
            if(n3 == "carnivoro"){
                cout<<"aguia"<<endl;
            }
            else{
                cout<<"pomba"<<endl;
            }
        }
    }
    else{
        if(n2 == "anelideo"){
            if(n3 == "onivoro"){
                cout<<"minhoca"<<endl;
            }
            else{
                cout<<"sanguessuga"<<endl;
            }
        }
        else{
            if(n3 == "hematofago"){
                cout<<"pulga"<<endl;
            }
            else{
                cout<<"lagarta"<<endl;
            }
        }
    }

    return 0;
}