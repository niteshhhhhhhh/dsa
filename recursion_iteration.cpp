#include<iostream>
using namespace std; 

long double fact(int n){
    long double fact = 1; 
    for (int i = n; i >1; i--){
        fact = fact * i;
    }
return fact;
}
int main(){
    cout<<"The factorial is:"<< fact(1000);
    return 0;
}
