#include<iostream>
using namespace std; 

int fibo(int n ){
    if (n == 0 || n == 1){ // base case
        return n;
    }
    else return fibo(n - 1 )+fibo(n - 2);
    
}

int main (){
    int length, count = 0;
    cout<<"Enter number of term:";
    cin>>length;
    cout<<"The fibonacii of " << length << " is: ";
    while (count<length){
        cout<< fibo(count)<< " ";
        count ++;
    }
    return 0;
}
