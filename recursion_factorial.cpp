#include<iostream>
using namespace std; 

int fact(int n ){
    if (n == 0){ // base case
        return 1;
    }
    return n*fact(n-1);
    
}

int main (){
    int no;
    cout<<"Enter number:";
    cin>>no;
    cout<<"The factorial of " << no << " is: "<< fact(no);
    return 0;
}
